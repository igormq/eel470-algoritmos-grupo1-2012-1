/*
 * File:   mystringtest_class.h
 * Author: bamorim
 *
 * Created on 15/04/2012, 01:20:56
 */

#ifndef MYSTRINGTEST_CLASS_H
#define	MYSTRINGTEST_CLASS_H

#include <cppunit/extensions/HelperMacros.h>
#include <algorithm>
#include "../my_string.h"

class mystringtest_class : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(mystringtest_class);

    CPPUNIT_TEST(testToSafeAccentuation);
    CPPUNIT_TEST(testToSafeAccentuationUpperCase);
    CPPUNIT_TEST(testToSafeAll);

    CPPUNIT_TEST(testGetWordsSimple);
    CPPUNIT_TEST(testGetWordsWithComma);
    CPPUNIT_TEST(testGetWordsFullPunctuated);

    CPPUNIT_TEST_SUITE_END();

public:
    mystringtest_class();
    virtual ~mystringtest_class();
    void setUp();
    void tearDown();

private:
    void testToSafeAccentuation();
    void testToSafeAccentuationUpperCase();
    void testToSafeAll();
    void testGetWordsSimple();
    void testGetWordsWithComma();
    void testGetWordsFullPunctuated();
};

#endif	/* MYSTRINGTEST_CLASS_H */

