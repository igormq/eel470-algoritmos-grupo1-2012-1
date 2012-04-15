/*
 * File:   mystringtest_class.cpp
 * Author: bamorim
 *
 * Created on 15/04/2012, 01:20:56
 */

#include "mystringtest_class.h"


CPPUNIT_TEST_SUITE_REGISTRATION(mystringtest_class);

mystringtest_class::mystringtest_class() {
}

mystringtest_class::~mystringtest_class() {
}

void mystringtest_class::setUp() {
}

void mystringtest_class::tearDown() {
}

void mystringtest_class::testToSafeAccentuation() {
    MyString myString = "teste ação";
    myString.toSafe();
    CPPUNIT_ASSERT(myString == "teste acao");
}

void mystringtest_class::testToSafeAccentuationUpperCase() {
    CPPUNIT_ASSERT(true);
}

