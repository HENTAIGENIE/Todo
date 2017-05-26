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
    int taskCount;
    std::string taskName;
    std::string taskBody;
    void requestTaskName(void);
    void requestTaskBody(void);
    void retrieveTask(int);
public:
    void createNewTask(void);
    void saveTask(void);
    void displayAllTasks(void);
    void displayTask(void);
    std::string getTaskName(void);
};

#endif /* tasks_h */
