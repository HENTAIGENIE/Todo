//
//  task.hpp
//  Task Manager
//
//  Created by Jackson Burns on 5/13/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#ifndef tasks_h
#define tasks_h

#include <string>


class Task {
    
private:
    std::string taskName;
    std::string taskBody;
    
public:
    std::string getTaskName(void);
    std::string getTaskBody(void);
    void setTaskName(std::string);
    void setTaskBody(std::string);
    
    Task();
};

void createNewTask(void);
void saveTasks(void);
void displayTasks(void);

#endif /* tasks_h */
