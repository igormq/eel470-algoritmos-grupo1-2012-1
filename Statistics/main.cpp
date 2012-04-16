/* 
 * File:   main.cpp
 * Author: igormq
 *
 * Created on April 15, 2012, 12:50 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string nome;
    cout << "Qual seu nome?" << endl;
    cin >> nome;
    cout << "Seja bem vindo " << nome << "!" << endl;
    return EXIT_SUCCESS;
}

