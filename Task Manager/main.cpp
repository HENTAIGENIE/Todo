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


std::string userCommand;

void executeCommand(std::string);
void promptUserForCommand(std::string);
void simplifyUserInput(std::string);


/*! Main Program */
int main(int argc, const char * argv[]) {
    
    preformSetupRoutine();
    
    while (shouldContinueRunning){
        
        promptUserForCommand("Input Command: ");
        executeCommand(userCommand);
        
    }
    
    /*
     *  [Save or some shit]
     *  [Exit program code]
     */
    
    return 0;
}


/*! Request a command from the user */
void promptUserForCommand(std::string promptMessage){
    
    std::cout << promptMessage << std::endl;
    getline(std::cin, userCommand);
    simplifyUserInput(userCommand);

}


/*! Make user input more easily readable */
void simplifyUserInput(std::string input){
    
    removeExcessWhiteSpace(&userCommand);
    makeLowerCase(&userCommand);
    
}


/*! Preform an action based on the value of the 'command' argument */
void executeCommand(std::string command){
    
    if (command == "new task"){
        
        createNewTask();
        
    }
    else if (command == "list"){
        
        displayTasks();
        
    }
    else if (command == "exit"){
        
        shouldContinueRunning = false;
        
    }
    else{
        
        std::cout << "\'" << command << "\' is not a valid command" << std::endl;
        
    }
    
}


