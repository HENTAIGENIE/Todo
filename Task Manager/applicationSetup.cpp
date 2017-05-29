//
//  applicationSetup.cpp
//  Task Manager
//
//  Created by Jackson Burns on 5/25/17.
//  Copyright © 2017 Planche Gods. All rights reserved.
//

#include <iostream>
#include "applicationSetup.hpp"


void restoreSettings();
void loadConfigurations();


/*! Preforms basic application setup routine */
void preformSetupRoutine(){
    
    restoreSettings();
    
}


/*! Restore application settings and data from save files */
void restoreSettings(){
    
    try{
        
        loadConfigurations();
        
    }
    catch(std::exception e){
        
        std::cout << "Failed to load config file" << std::endl;
        
    }
    
}



/*! De-serialize and load configurations */
void loadConfigurations(void){
    
   
    
}









