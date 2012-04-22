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
    
    std::string str = "Teste!@3a«Á‡¡";
    sc.toSafe(str);
    CPPUNIT_ASSERT(str == "teste!@3accaa");
    
    str = "al·";
    sc.toSafe(str);
    CPPUNIT_ASSERT(str == "ala");
    
    str = "·l·";
    sc.toSafe(str);
    CPPUNIT_ASSERT(str == "ala");
    
    str = "·ÈÌÛ˙‡ËÏÚ˘‚ÍÓÙ˚‰ÎÔˆ¸„?ı¡…Õ”⁄¿»Ã“Ÿ¬ Œ‘€ƒÀœ÷‹√?’«Á";
    sc.toSafe(str);
    CPPUNIT_ASSERT(str == "aeiouaeiouaeiouaeiouaeoaeiouaeiouaeiouaeiouaeocc");
    
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

