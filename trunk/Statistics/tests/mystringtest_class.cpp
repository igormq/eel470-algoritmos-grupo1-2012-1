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
    MyString myString = "TESTE AÇÃO";
    myString.toSafe();
    CPPUNIT_ASSERT(myString == "teste acao");
}

void mystringtest_class::testToSafeAll() {
    MyString myString = "AÁÀÂÃÄEÉÈÊẼËIÍÌÎĨÏOÓÒÔÕÖUÚÙÛŨÜaáàâãäeéèêẽëiíìîĩïoóòôõöuúùûũüú";
    myString.toSafe();
    CPPUNIT_ASSERT(myString == "aaaaaaeeeeeeiiiiiioooooouuuuuuaaaaaaeeeeeeiiiiiioooooouuuuuu");
}

void mystringtest_class::testGetWordsSimple(){
    MyString myString = "testea testeb testec";
    std::vector<std::string> wordsReturned = myString.getWords();
    std::string wordsCompare[] = {"testea","testeb","testec"};
    
    CPPUNIT_ASSERT(equal(wordsReturned.begin(), wordsReturned.end(),wordsCompare));
}

void mystringtest_class::testGetWordsWithComma(){
    MyString myString = "testea, testeb, testec";
    std::vector<std::string> wordsReturned = myString.getWords();
    std::string wordsCompare[] = {"testea","testeb","testec"};
    
    CPPUNIT_ASSERT(equal(wordsReturned.begin(), wordsReturned.end(),wordsCompare));
}

void mystringtest_class::testGetWordsFullPunctuated(){
    MyString myString = "testea, testeb, testec.";
    std::vector<std::string> wordsReturned = myString.getWords();
    std::string wordsCompare[] = {"testea","testeb","testec"};
    
    CPPUNIT_ASSERT(equal(wordsReturned.begin(), wordsReturned.end(),wordsCompare));
}
