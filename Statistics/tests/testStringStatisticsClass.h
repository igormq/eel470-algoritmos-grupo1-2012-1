/*
 * File:   testStringStatisticsClass.h
 * Author: Igor Macedo Quintanilha <igormq at poli.ufrj.br>
 *
 * Created on Apr 19, 2012, 11:39:58 PM
 */

#ifndef TESTSTRINGSTATISTICSCLASS_H
#define	TESTSTRINGSTATISTICSCLASS_H

#include <cppunit/extensions/HelperMacros.h>
#include "StringStatistics.h"
#include "StringCounter.h"

class testStringStatisticsClass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(testStringStatisticsClass);

    CPPUNIT_TEST(testAdd);
    CPPUNIT_TEST(testGetData);
    CPPUNIT_TEST(testResetStatistics);
    CPPUNIT_TEST(testErase);

    CPPUNIT_TEST_SUITE_END();

public:
    testStringStatisticsClass();
    virtual ~testStringStatisticsClass();
    void setUp();
    void tearDown();

private:
    void testAdd();
    void testGetData();
    void testResetStatistics();
    void testErase();
};

#endif	/* TESTSTRINGSTATISTICSCLASS_H */

