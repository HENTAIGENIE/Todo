//
//  stringManipulation.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/13/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include "stringManipulation.hpp"
#include <iostream>

void trimWhiteSpace(std::string* p_input){
    
    std::string input = *p_input;
    std::string output;
    
    //Discerns between extra spaces, characters, and necessary spacing
    for (int i = 0; i < input.length(); i++){
        
        if (input[i] != ' ') output += input[i];
        else if(input[i] == ' ' && i != 0 && input[i - 1] != ' ') output += " ";
    }
    //Remove extra spaces accidentally created
    if (output[output.length()-1] == ' ') output = output.substr(0,output.length()-1);
        
    *p_input = output;
}

void makeLowerCase(std::string* p_input){
    
    std::string input = *p_input;
    
    for (int i = 0; input[i]; i++) {
        
        input[i] = tolower(input[i]);
    }
    
    *p_input = input;
    
}

/* Splits string into words based on spacing
 
 std::vector<std::string> words;
 std::string word;
 
 for (int i = 0; i < rawInput.length(); i++){
 
 if (rawInput[i] != ' '){
 word += rawInput[i];
 }
 else if(rawInput[i] == ' ' && i != 0 && rawInput[i - 1] != ' ' ) {
 words.push_back(word);
 word = " ";
 }
 
 } words.push_back(word); //probably has a "word" that is blank for the last element 
 
 */
