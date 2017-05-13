//
//  main.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>

#include "main.hpp"

std::string branchCommand;

int main(int argc, const char * argv[]) {
    while (isRunning){
        
        userCommand.getUserInput();
        branchCommand = userCommand.parseUserInput();
        
        if (branchCommand == "new task"){
            
        }
        else if (branchCommand == "exit"){
            isRunning = false;
        }
        else{
            
        }
        
    }
    
    /*
     *  [Exit program code]
     */
    
    return 0;
}
