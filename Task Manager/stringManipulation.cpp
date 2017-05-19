//
//  stringManipulation.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/13/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include "stringManipulation.hpp"
#include <iostream>

/*! Removes any extra white spacing from a string */
void removeExcessWhiteSpace(std::string* p_input){
    
    std::string input = *p_input;
    std::string output;
    
    //Detects extra whitespace in the string and creates an identical string without that extra whitespace
    for (int i = 0; i < input.length(); i++){
        
        if (input[i] != ' ') output += input[i];
        else if(input[i] == ' ' && i != 0 && input[i - 1] != ' ') output += " ";
        
    }
    //Remove extra space created when input has trailing spaces
    if (output[output.length()-1] == ' ') output = output.substr(0,output.length()-1);
        
    *p_input = output;
}

/*! Changes all alphabetic characters in a string to the lower case */
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
