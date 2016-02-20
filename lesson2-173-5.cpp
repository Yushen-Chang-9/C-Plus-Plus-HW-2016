//
//  main.cpp
//  lesson2-173-5
//
//  Created by Yushen Chang on 2/1/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
  //This is a number generator for all prime numbers between 3 and 100
    
    //variable of declaration
    int i;
    
    //display the prime numbers between 3 and 100
    cout << "all prime numbers between 3 and 100" << endl;
    
    //For Loop
    for (int integer = 3; integer <= 100; integer++)
    {
        i = 0;
        for (int divisor =2; divisor <= integer/2; divisor++ )
        {
            if ( integer % divisor == 0)
            {
                //increment
                i++;
                //stop checking for prime
                break;
    
            } //end if
        } //end loop
        
        //another if statement
        
        if (i == 0)
        {
            cout << integer  << endl;
            //end loop
            
        }
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    return 0;
}

