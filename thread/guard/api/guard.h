/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2010 Manfred Doudar, NICTA Ltd.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
/////////////////////////////////////////////////////////////////////////////////////////////


#ifndef NICTA_THREAD_GUARD_H
#define NICTA_THREAD_GUARD_H


#include <boost/utility.hpp>

namespace nicta {
namespace thread {

    template < typename Lockable
             , template<typename Lockable_> class Lock
             >
    class guard : boost::noncopyable
    {
    public:

        ~guard() throw ()
        {
            if (this->lock_.owns_lock())
            {
                this->lock_.unlock();
            }
        }

        explicit guard(Lockable& mutex) throw ()
        : lock_(mutex)
        {
        }

        Lock<Lockable>& operator()() throw ()
        {
            return this->lock_;
        }

        void unlock() throw ()
        {
            this->lock_.unlock();
        }


    private:

        Lock<Lockable> lock_;
    };

} } // namespace nicta::thread


#endif
