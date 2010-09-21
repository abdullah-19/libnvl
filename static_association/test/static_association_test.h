/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2010 Manfred Doudar, NICTA Ltd.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
/////////////////////////////////////////////////////////////////////////////////////////////


#ifndef STATICASSOCIATION_TEST_H
#define STATICASSOCIATION_TEST_H

#include <cppunit/extensions/HelperMacros.h>

class StaticAssociationTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(StaticAssociationTest);
    CPPUNIT_TEST(staticAssociation);
    CPPUNIT_TEST_SUITE_END();

public:

    virtual void setUp();
    virtual void tearDown();

protected:

    void staticAssociation();

};

#endif
