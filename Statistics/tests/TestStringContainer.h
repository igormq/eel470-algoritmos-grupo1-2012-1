/*
 * File:   TestStringContainer.h
 * Author: Igor Macedo Quintanilha <igormq at poli.ufrj.br>
 *
 * Created on Apr 19, 2012, 8:32:14 PM
 */

#ifndef TESTSTRINGCONTAINER_H
#define	TESTSTRINGCONTAINER_H

#include <cppunit/extensions/HelperMacros.h>

#include "StringContainer.h"

class TestStringContainer : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestStringContainer);

    CPPUNIT_TEST(testToSafe);
    CPPUNIT_TEST(testCharIsValid);
    CPPUNIT_TEST(testGetFirstValidWord);
    CPPUNIT_TEST(testGetWord);
    CPPUNIT_TEST(testGetWordCount);

    CPPUNIT_TEST_SUITE_END();

public:
    TestStringContainer();
    virtual ~TestStringContainer();
    void setUp();
    void tearDown();

private:
    void testToSafe();
    void testCharIsValid();
    void testGetFirstValidWord();
    void testGetWord();
    void testGetWordCount();
};

#endif	/* TESTSTRINGCONTAINER_H */

