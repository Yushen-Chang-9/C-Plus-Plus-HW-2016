//
//  DigitalTimeException.hpp
//  Digital Time C++ Chapter8 PJ2
//
//  Created by Yushen on 3/26/16.
//  Copyright © 2016 yushen. All rights reserved.
//

//DigitalTimeException.h
#ifndef DIGITAL_TIME_EXCEPTION_H
#define DIGITAL_TIME_EXCEPTION_H
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class DigitalTimeException
{
    
private:
    //private variables
    string errMessage;
    int errNumber;
    
public:
    //constructor to set error number and message
    DigitalTimeException(int errNumber, string errMessage);
    //public methods of class
    string getErrorMessage();
    int getErrorNumber();
    
};


#endif /* DigitalTimeException_hpp */
