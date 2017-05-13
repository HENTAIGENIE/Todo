//
//  userInput.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>

#include "userInterface.hpp"
#include "stringManipulation.hpp"

using namespace std;

string branchCommand;

string UserInput::parseUserInput(){
    
    removeWhiteSpaces(rawInput);
    
    return branchCommand;
}

void UserInput::getUserInput(){
    
    cout << "Get User Input" << endl;
    cin >> rawInput;
    cout << rawInput << endl;
    
}







