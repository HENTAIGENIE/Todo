//
//  userInput.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>

#include <vector>
#include <cctype>
#include "userInterface.hpp"
#include "stringManipulation.hpp"


std::string UserInput::parseUserInput(){
    
    trimWhiteSpace(rawInput);
    makeLowerCase(rawInput);
    
    return rawInput;
}

void UserInput::getUserInput(){
    
    std::cout << "Get User Input" << std::endl;
    getline(std::cin, rawInput);
    
}









