//
//  main.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>
#include "main.hpp"
#include "stringManipulation.hpp"
#include "tasks.hpp"
#include "applicationSetup.hpp"


UserInput userCommand;
Task userTask;


int main(int argc, const char * argv[]) {
    
    preformSetupRoutine();
    
    while (shouldContinueRunning){
        
        userCommand.requestUserInputFromConsole("Input Command");
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
        
        userTask.createNewTask();
        std::cout << std::string(10, '\n');
        userTask.displayTask();
        
    }
    else if (command == "list"){
        
        
        
    }
    else if (command == "exit"){
        
        shouldContinueRunning = false;
        
    }
    else{
        
        std::cout << "\'" << command << "\' is not a valid command" << std::endl;
        
    }
    
}


