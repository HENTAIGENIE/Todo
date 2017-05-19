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


/*! Prompts the user for string input */
void UserInput::requestUserInputFromConsole(){
    
    std::cout << promptMessage << std::endl;
    getline(std::cin, consoleInput);
    
}

/*! Set the string displayed when requesting user input */
void UserInput::setPromptMessage(std::string set_promptMessage){
    
    promptMessage = set_promptMessage;
    
}

/*! Make the acquired 'user-input' uniform and easily readable */
void UserInput::simplifyUserInput(){
    removeExcessWhiteSpace(&consoleInput);
    makeLowerCase(&consoleInput);
}

/*! Returns private member-string 'consoleInput' */
std::string UserInput::getConsoleInput(void){
    
    return consoleInput;
    
}











