//
//  stringManipulation.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/13/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include "stringManipulation.hpp"


std::string trimWhiteSpace(std::string input){
    /** Remove excess white spaces*/
    std::string output;
    
    for (int i = 0; i < input.length(); i++){
        
        if (input[i] != ' ') output += input[i];
        else if(input[i] == ' ' && i != 0 && input[i - 1] != ' ') output += " ";
    }
    if (output[output.length()-1] == ' ') output = output.substr(0,output.length()-1);
        
    return output;
}

std::string makeLowerCase(std::string input){

    for (int i = 0; input[i]; i++) {
        
        input[i] = tolower(input[i]);
    }
    return input;
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
