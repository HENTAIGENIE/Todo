//
//  main.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>
#include "main.hpp"
#include "task.hpp"
#include "stringManipulation.hpp"


std::string branchCommand;

int main(int argc, const char * argv[]) {
    
    while (shouldContinueRunning){
        
        userCommand.promptMessage = "Input Command:";
        userCommand.getUserInputFromConsole();
        trimWhiteSpace(&userCommand.consoleInput);
        makeLowerCase(&userCommand.consoleInput);
        
        if (userCommand.consoleInput == "new task"){
            
            std::cout << "new task" << std::endl;
        }
        else if (userCommand.consoleInput == "exit"){
            
            shouldContinueRunning = false;
        }
        else{
            
            std::cout << "\'" << userCommand.consoleInput << "\' is not a valid command" << std::endl;
        }
    }
    
    /*
     *  [Save or some shit]
     *  [Exit program code]
     */
    
    return 0;
}

