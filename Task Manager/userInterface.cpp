//
//  userInput.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/5/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>

#include <vector>
#include "userInterface.hpp"
#include "stringManipulation.hpp"

std::string branchCommand;

std::string UserInput::parseUserInput(){
    
    std::vector<std::string> words;
    std::string word;
    
    for (int i = 0; i < rawInput.length(); i++){
        
        if (rawInput[i] != ' '){
            word += rawInput[i];
        }
        else if(rawInput[i] == ' ' && i != 0 && rawInput[i - 1] != ' ') {
            words.push_back(word);
            word = " ";
        }
        
    } words.push_back(word);
    
    for (int i = 0; i < words.size(); i++){
        std::cout << words[i];
    } std::cout << std::endl;
    
    return branchCommand;
}

void UserInput::getUserInput(){
    
    std::cout << "Get User Input" << std::endl;
    getline(std::cin, rawInput);
    
}







