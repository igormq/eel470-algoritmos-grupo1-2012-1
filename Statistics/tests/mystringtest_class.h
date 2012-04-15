/*
 * File:   mystringtest_class.h
 * Author: bamorim
 *
 * Created on 15/04/2012, 01:20:56
 */

#ifndef MYSTRINGTEST_CLASS_H
#define	MYSTRINGTEST_CLASS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../my_string.h"

class mystringtest_class : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(mystringtest_class);

    CPPUNIT_TEST(testToSafeAccentuation);
    CPPUNIT_TEST(testToSafeAccentuationUpperCase);

    CPPUNIT_TEST_SUITE_END();

public:
    mystringtest_class();
    virtual ~mystringtest_class();
    void setUp();
    void tearDown();

private:
    void testToSafeAccentuation();
    void testToSafeAccentuationUpperCase();
};

#endif	/* MYSTRINGTEST_CLASS_H */

