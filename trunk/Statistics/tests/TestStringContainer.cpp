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
    StringContainer sc;
    
    std::string str = "Teste!@3a";
    sc.toSafe(str);
    CPPUNIT_ASSERT(str == "teste!@3a");
    
    str = "alá";
    sc.toSafe(str);
    CPPUNIT_ASSERT(str == "alá");
    
}
void TestStringContainer::testCharIsValid(){
    StringContainer sc;
    CPPUNIT_ASSERT(sc.charIsValid('a'));
    CPPUNIT_ASSERT(sc.charIsValid('b'));
    CPPUNIT_ASSERT(!sc.charIsValid('!'));
}
void TestStringContainer::testGetFirstValidWord(){
    StringContainer sc;
    std::string str = "!feliz amem!@# !)@#@)!#!) %()!@ lol !(#";
    CPPUNIT_ASSERT(sc.getFirstValidWord(str) == "feliz");
    CPPUNIT_ASSERT(sc.getFirstValidWord(str) == "amem");
    CPPUNIT_ASSERT(sc.getFirstValidWord(str) == "lol");
}
void TestStringContainer::testGetWord(){
    StringContainer sc("Vida Felix");
    CPPUNIT_ASSERT(sc.getWord(0) == "vida");
    CPPUNIT_ASSERT(sc.getWord(1) == "felix");
}
void TestStringContainer::testGetWordCount(){
    StringContainer sc("Vida Felix");
    CPPUNIT_ASSERT(sc.getWordCount() == 2);
}

