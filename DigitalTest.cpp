//
//  main.cpp
//  Digital Time C++ Chapter8 PJ2
//
//  Created by Yushen on 3/26/16.
//  Copyright © 2016 yushen. All rights reserved.
//
#include "DigitalTimeException.h"
#include "DigitalTime.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
    //create an instance of DigitalTime
    DigitalTime clock;
    try
    {
        cout<<"Enter time in HH:MM format"<<endl;
        //read clock time
        cin>> clock;
        //print clock time if valid
        //otherwise throws DigitalTimeException
        cout<<clock<<endl;
    }
    
    //Catch the exception and print the erro number and error message
    catch(DigitalTimeException& e)
    {
        //call methods to print erro number and error message
        cout<<e.getErrorNumber()<<" : "<<e.getErrorMessage()<<endl;
    }
    
    system("Pause");
    return 0;
}