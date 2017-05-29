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


std::string Task::getTaskName(void){
    return taskName;
}

std::string Task::getTaskBody(void){
    return taskBody;
}

void Task::setTaskName(std::string input){
    taskName = input;
}

void Task::setTaskBody(std::string input){
    taskBody = input;
}

Task::Task(){
    
}

void createNewTask(){
    std::cout << "New task" << std::endl;
}

void displayTasks(){
    std::cout << "Display Tasks" << std::endl;
}












