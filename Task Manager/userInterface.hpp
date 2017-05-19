//
//  userInput.hpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#ifndef userInterface_h
#define userInterface_h

#include <string>

/*! Handles input from the user */
class UserInput{
   
private:
    std::string consoleInput;
    std::string promptMessage;
    
public:
    void requestUserInputFromConsole();
    void setPromptMessage(std::string);
    void simplifyUserInput();
    std::string getConsoleInput(void);
    
};
 



#endif /* userInterface_h */
