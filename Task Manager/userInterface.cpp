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


std::string UserInput::parseUserInput(){
    
    refinedInput = trimWhiteSpace(rawInput);
    refinedInput = makeLowerCase(refinedInput);
    
    return refinedInput;
}

void UserInput::getUserInput(){
    
    std::cout << inputPrompt << std::endl;
    getline(std::cin, rawInput);
    
}









