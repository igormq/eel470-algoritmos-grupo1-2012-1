/*
 * File:   testStringStatisticsClass.cpp
 * Author: Igor Macedo Quintanilha <igormq at poli.ufrj.br>
 *
 * Created on Apr 19, 2012, 11:39:58 PM
 */

#include "testStringStatisticsClass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(testStringStatisticsClass);

testStringStatisticsClass::testStringStatisticsClass() {
}

testStringStatisticsClass::~testStringStatisticsClass() {
}

void testStringStatisticsClass::setUp() {
}

void testStringStatisticsClass::tearDown() {
}

void testStringStatisticsClass::testAdd() {
    StringStatistics stTest;
    std::set<StringCounter> dataSet;
    stTest.add("banana");
    dataSet = stTest.getData();
    std::set<StringCounter>::const_iterator it = dataSet.find(StringCounter("banana"));
    CPPUNIT_ASSERT(it!=dataSet.end());
}
void testStringStatisticsClass::testGetData(){
    
}
void testStringStatisticsClass::testResetStatistics(){
    
}
void testStringStatisticsClass::testErase(){
    
}

