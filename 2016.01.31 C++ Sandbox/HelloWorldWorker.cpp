//
//  HelloWorldWorker.cpp
//  2016.01.31 C++ Sandbox
//
//  Created by Haig Beylerian on 2016-01-31.
//  Copyright © 2016 Haig Beylerian. All rights reserved.
//
#include <iostream>
#include "HelloWorldWorker.h"
using namespace std;

void HelloWorldWorker::printHelloWorld() {
    cout << "Hello, world!!!!!" << endl;
}

void HelloWorldWorker::printHelloWorldStatic() {
    cout << "Hello, Earth" << endl;
}

void HelloWorldWorker::incrementByValue(int i) {
    cout << "Value: i before " << i << endl;
    i++;
    cout << "Value: i after " << i << endl;
}

void HelloWorldWorker::incrementByReference(int* iReference) {
    cout << "Reference: iReference before is " << iReference << endl;
    cout << "DEReference: iReference before is " << *iReference << endl;
    (*iReference)++;
    cout << "DEReference: iReference before is " << *iReference << endl;
    cout << "Reference: iReference after is " << iReference << endl;
}

void HelloWorldWorker::printFiveMoreThan(int i){
    i += 5;
    cout << "i is " << i << endl;
}

//Passing variable by value is like picture of the house...

void HelloWorldWorker::printFiveMoreThanRef(int* iReference){
    (*iReference) += 5;
    cout << "i (by reference) is " << *iReference << endl;
}

//whereas passing the reference of a variable is like handing over the keys.
