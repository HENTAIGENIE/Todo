//
//  stringManipulation.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/13/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include "stringManipulation.hpp"

std::string trimWhiteSpace(std::string input){
    
    std::string output;
    
    for (int i = 0; i < input.length(); i++){
        
        if (input[i] != ' ') output += input[i];
        else if(input[i] == ' ' && i != 0 && input[i - 1] != ' ') output += " ";
    }
    return output;
}

std::string makeLowerCase(std::string input){

    for (int i = 0; input[i]; i++) {
        
        input[i] = tolower(input[i]);
    }
    return input;
}
