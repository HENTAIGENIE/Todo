//
//  task.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/13/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "tasks.hpp"


int totalNumberOfTasks;
std::vector<Task> loadedTasks;

void loadTasks(void);
void displayLoadedTasks(void);
void saveTasks(void);
std::string promptUserForInput(std::string);


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
    
    totalNumberOfTasks++;
    
}

void createNewTask(){
    
    Task newTask = *new Task;
    newTask.setTaskName(promptUserForInput("Task Title: "));
    newTask.setTaskBody(promptUserForInput("Task Notes: "));
    loadedTasks.push_back(newTask);
    
}

std::string promptUserForInput(std::string promptMessage){
    
    std::string output;
    std::cout << promptMessage << std::endl;
    getline(std::cin, output);
    return output;
    
}

void displayTasks(){
    
    loadTasks();
    displayLoadedTasks();
    
}

void loadTasks(){
    

    
}

void displayLoadedTasks(){
    
    for (int i = 0; i < totalNumberOfTasks; i++){
        std::cout << loadedTasks[i].getTaskName() << std::endl;
        std::cout << loadedTasks[i].getTaskBody() << std::endl;
        std::cout << std::string(30, '-') << std::endl;
    }
    
}












