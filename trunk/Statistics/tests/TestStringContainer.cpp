/*
 * File:   TestStringContainer.cpp
 * Author: Igor Macedo Quintanilha <igormq at poli.ufrj.br>
 *
 * Created on Apr 19, 2012, 8:32:15 PM
 */

#include "TestStringContainer.h"

CPPUNIT_TEST_SUITE_REGISTRATION(TestStringContainer);

TestStringContainer::TestStringContainer() {
}

TestStringContainer::~TestStringContainer() {
}

void TestStringContainer::setUp() {
}

void TestStringContainer::tearDown() {
}

void TestStringContainer::testToSafe()
{
    StringContainer sc = StringContainer("a");
    std::string str = "Teste!@3a";
    sc.toSafe(str);
    CPPUNIT_ASSERT( (str == "teste3a"));
}
void TestStringContainer::testCharIsValid(){
    CPPUNIT_ASSERT(false);
}
void TestStringContainer::testGetFirstValidWord(){
    CPPUNIT_ASSERT(false);
}
void TestStringContainer::testGetWord(){
    CPPUNIT_ASSERT(false);
}
void TestStringContainer::testGetWordCount(){
    CPPUNIT_ASSERT(false);
}

