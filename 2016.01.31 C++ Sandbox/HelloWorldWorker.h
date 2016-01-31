//
//  HelloWorldWorker.hpp
//  2016.01.31 C++ Sandbox
//
//  Created by Haig Beylerian on 2016-01-31.
//  Copyright © 2016 Haig Beylerian. All rights reserved.
//

#ifndef HelloWorldWorker_h
#define HelloWorldWorker_h

#include <stdio.h>

class HelloWorldWorker {
private:
    //put your private stuff here
    int blah;
    float otherBlah;
public:
    //put your public stuff here
    void printHelloWorld();
    static void printHelloWorldStatic();
    void incrementByValue(int);
    void incrementByReference(int*);
    void printFiveMoreThan(int);
    void printFiveMoreThanRef(int*);
};

#endif /* HelloWorldWorker_h */
