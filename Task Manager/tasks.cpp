//
//  task.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/13/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "tasks.hpp"
#include "userInterface.hpp"


UserInput userTaskInput;


/*! Create a new task */
void Task::createNewTask(void){
    
    requestTaskName();
    requestTaskBody();
    
}


/*! Request a task name from the user */
void Task::requestTaskName(void){
    
    userTaskInput.requestUserInputFromConsole("Input Task Name");
    taskName = userTaskInput.getConsoleInput();
    
}


/*! Request body text for task from user */
void Task::requestTaskBody(void){
    
    userTaskInput.requestUserInputFromConsole("Input Task Body");
    taskBody = userTaskInput.getConsoleInput();
    
}


/*! Serialize task data */
void Task::saveTask(void){
    try {
        std::ofstream saveFile;
        saveFile.open("todoSave");
    }
    catch(std::exception e) {
        
    }
}


/*! Display current task contents */
void Task::displayTask(void){
    
    std::cout << taskName << std::endl;
    std::cout << taskBody << std::endl;
    std::cout << std::endl;
    
}


/*! De-serialize and display all saved tasks */
void Task::displayAllTasks(){
    
}


/*! Aquire task based on task index requested */
void Task::retrieveTask(int taskIndex){
    
}


/*! Returns private member-string 'taskName' */
std::string Task::getTaskName(void){
    
    return taskName;
    
}



