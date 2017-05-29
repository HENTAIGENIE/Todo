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


std::string userCommand;

void executeCommand(std::string);
void promptUserForCommand(std::string);
void simplifyUserInput(std::string);


/*! Main Program */
int main(int argc, const char * argv[]) {
    
    loadTasks();
    
    while (shouldContinueRunning){
        
        std::cout << std::string(3,'\n');
        promptUserForCommand("Input Command: ");
        executeCommand(userCommand);
        
    }
    
    saveTasks();
    
    return 0;
}


/*! Request a command from the user */
void promptUserForCommand(std::string promptMessage){
    
    std::cout << promptMessage << std::endl;
    getline(std::cin, userCommand);
    simplifyUserInput(userCommand);

}

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


