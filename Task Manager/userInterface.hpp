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


class UserInput{
    
private:
    std::string rawInput;
    
public:
    ///Request input from user
    std::string parseUserInput();
    void getUserInput();
    
};
 



#endif /* userInterface_h */
