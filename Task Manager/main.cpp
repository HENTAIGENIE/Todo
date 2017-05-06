//
//  main.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>

#include "main.hpp"
#include "userInput.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    while (isRunning){
        cin >> userInput;
        parseUserInput(userInput);
    }
    return 0;
}
