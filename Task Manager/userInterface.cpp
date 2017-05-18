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


void UserInput::getUserInputFromConsole(){
    
    std::cout << promptMessage << std::endl;
    getline(std::cin, consoleInput);
    trimWhiteSpace(&consoleInput);
    makeLowerCase(&consoleInput);
    
}









