//
//  main.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>
#include "main.hpp"
#include "tasks.hpp"
#include "stringManipulation.hpp"


int main(int argc, const char * argv[]) {
    
    UserInput userCommand;
    userCommand.setPromptMessage("Input Command: ");
    
    while (shouldContinueRunning){
        
        userCommand.requestUserInputFromConsole();
        userCommand.simplifyUserInput();
        
        executeCommand(userCommand.getConsoleInput());
        
    }
    
    /*
     *  [Save or some shit]
     *  [Exit program code]
     */
    
    return 0;
}

/*! Preform an action based on the value of the 'command' argument */
void executeCommand(std::string command){
    
    if (command == "new task"){
        
        std::cout << "new task" << std::endl;
        
    }
    else if (command == "exit"){
        
        shouldContinueRunning = false;
        
    }
    else{
        
        std::cout << "\'" << command << "\' is not a valid command" << std::endl;
        
    }
    
}

