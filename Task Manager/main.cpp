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


std::string branchCommand;

int main(int argc, const char * argv[]) {
    while (isRunning){
        
        userCommand.inputPrompt = "Input Command:";
        userCommand.getUserInput();
        userCommand.parseUserInput();
        
        if (userCommand.refinedInput == "new task"){
            
            std::cout << "new task" << std::endl;
        }
        else if (userCommand.refinedInput == "exit"){
            
            isRunning = false;
        }
        else{
            
            std::cout << "\'" << userCommand.refinedInput << "\' is not a valid command" << std::endl;
        }
    }
    
    /*
     *  [Exit program code]
     */
    
    return 0;
}
