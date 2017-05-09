//
//  userInput.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>

#include "userInput.hpp"

using namespace std;

void dissectInput(string);
string tailorString(string);
string branchCommand;

string parseUserInput(string input){
    
    tailorString(input);
    
    dissectInput(input);
    
    return branchCommand;
}

void dissectInput(string input){
    
    //probably won't need this
    
}

string tailorString(string input){
    
    //trim extra white space
    
    return input;
}




