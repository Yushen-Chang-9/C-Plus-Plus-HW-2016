//
//  main.cpp
//  Lesson2-176-6 Version 2.0
//
//  Created by Yushen Chang on 2/6/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    char choice;
   
    
    int initial_population;
    int total_days;
    
    
    //Start of do while loop
    do {
    cout << "please enter pounds of crud" << endl;
    cin >> initial_population;
    
    cout << "please enter amount of days." << endl;
    cin >> total_days;
        
        
        
        //Computation of time period
        int time_period = total_days;
        //Variables for calculations
        int old_population=0;
        int current_population = initial_population;
        int new_population;
        
        
        
        //Calculate Population
        
        for (int i = 0; i< time_period/5; i++)
        {
           //check for population
            new_population = current_population + old_population;
            old_population = current_population;
            current_population = new_population;
           
            }
        //Display Results
        cout << "population will be " << new_population << " pounds";
        cout << " after " << total_days << " days"<< endl;
        
        //Replay Option
        cout << "Would you like to doit again? press 'y' or 'Y' for yes, if no press any key." << endl;
        cin >> choice;
        
        
        
        
        
        
        
        
        
        
        
        
    }//end of do while loop
    while (choice == 'y' || choice == 'Y');
    
    
    
    
    
    
    
    
    
   
    return 0;
}

