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
int numberOfLoadedTasks;
std::vector<Task> loadedTasks;

void displayLoadedTasks(void);
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
    
    
}


/*! Create a new task object */
void createNewTask(){
    
    totalNumberOfTasks++;
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


/*! Display all saved and currently loaded tasks */
void displayTasks(){
    
    displayLoadedTasks();
    
}

void displayLoadedTasks(){
    
    for (int i = 0; i < totalNumberOfTasks; i++){
        
        std::cout << loadedTasks[i].getTaskName() << std::endl;
        std::cout << loadedTasks[i].getTaskBody() << std::endl;
        std::cout << std::string(30, '-') << std::endl;
        
    }
    
}


/*! Save all loaded tasks */
void saveTasks(){
    
    std::ofstream saveFile;
    saveFile.open("tasks.sav", std::ios::out);
    saveFile << totalNumberOfTasks << std::endl;
    for (int i = 0; i < totalNumberOfTasks; i++){
        saveFile << loadedTasks[i].getTaskName() << std::endl;
        saveFile << loadedTasks[i].getTaskBody() << std::endl;
    }
    saveFile.close();
    
}


/*! Load all tasks from save file */
void loadTasks(){
    
    try{
        std::string tempName, tempBody, tempTotal;
        std::ifstream saveFile;
        saveFile.open("tasks.sav", std::ios::in);
        getline(saveFile, tempTotal);
        totalNumberOfTasks = std::stoi(tempTotal);
        for (int i = 0; i < totalNumberOfTasks; i++){
            Task loadedTask;
            loadedTasks.push_back(loadedTask);
            getline(saveFile, tempName);
            getline(saveFile, tempBody);
            loadedTasks[i].setTaskName(tempName);
            loadedTasks[i].setTaskBody(tempBody);
        }
        saveFile.close();
    }
    catch(std::exception e){
        std::cout << "File Not Found" << std::endl;
    }
    
}












