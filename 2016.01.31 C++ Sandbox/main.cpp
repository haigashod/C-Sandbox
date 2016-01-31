//
//  main.cpp
//  2016.01.31 C++ Sandbox
//
//  Created by Haig Beylerian on 2016-01-31.
//  Copyright © 2016 Haig Beylerian. All rights reserved.
//

#include <iostream>
#include "HelloWorldWorker.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Main has started" << endl;
    HelloWorldWorker* a = new HelloWorldWorker();
    
    a->printHelloWorld();
    (*a).printHelloWorld();
    
    HelloWorldWorker::printHelloWorldStatic();
    
    int x = 0;
    int* xReference = &x;
    //&x means "Address of" x
    //*xReference means "What is at the address" xReference
    
    cout << "This is our main program!  Let's print x + 5" << endl;
    a->printFiveMoreThan(x);
    cout << "And x is: " << x << endl;
    
    cout << "Let's do that by reference!  Print x + 5" << endl;
    a->printFiveMoreThanRef(&x);
    cout << "And x is NOW: " << x << endl;
    
    return 0;
}

/*
 cout << "X is " << x << endl;
 cout << "Address of x is " << &x << endl;
 cout << "xReference is " << xReference << endl;
 cout << "xReference dereferenced is " << *xReference << endl;
 cout << "==============================" << endl;
 cout << "Before, X is " << x << endl;
 a->incrementByValue(x);
 cout << "After, x is " << x << endl;
 cout << "==============================" << endl;
 cout << "Before, X is " << x << endl;
 a->incrementByReference(xReference);
 cout << "After, x is " << x << endl;*/