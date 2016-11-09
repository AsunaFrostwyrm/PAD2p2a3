/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: max
 *
 * Created on 9. November 2016, 16:07
 */

#include <cstdlib>
#include "tracer.h"

using std::cout;
using std::cin;
using std::endl;
const int a = 5;

int main(int argc, char** argv) {

    int b = 7;

    Tracer<int> trace{a}; //Konstruktoraufruf
    Tracer<int> trace2{b}; //Konstruktoraufruf
    cout << trace.getValue() << endl; //getValue-Aufruf
    cout << trace2.getValue() << endl; //getValue-Aufruf
    trace.operator=(trace2); //Kopierkonstruktoraufruf  
    cout << trace.getValue() << endl; //getValue-Aufruf
    cout << trace2.getValue() << endl; //getValue-Aufruf
    //trace.~Tracer();  Destruktoraufruf kommt von selbst, warum?

    return 0;
}

