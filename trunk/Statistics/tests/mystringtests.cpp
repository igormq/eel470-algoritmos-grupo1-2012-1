/* 
 * File:   mystringtests.cpp
 * Author: bamorim
 *
 * Created on 15/04/2012, 01:18:23
 */

#include <stdlib.h>
#include <iostream>

/*
 * Simple C++ Test Suite
 */

void test1() {
    std::cout << "mystringtests test 1" << std::endl;
}

void test2() {
    std::cout << "mystringtests test 2" << std::endl;
    std::cout << "%TEST_FAILED% time=0 testname=test2 (mystringtests) message=error message sample" << std::endl;
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% mystringtests" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (mystringtests)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (mystringtests)" << std::endl;

    std::cout << "%TEST_STARTED% test2 (mystringtests)\n" << std::endl;
    test2();
    std::cout << "%TEST_FINISHED% time=0 test2 (mystringtests)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

