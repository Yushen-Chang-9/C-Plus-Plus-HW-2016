//
//  DigitalTimeException.cpp
//  Digital Time C++ Chapter8 PJ2
//
//  Created by Yushen on 3/26/16.
//  Copyright © 2016 yushen. All rights reserved.
//

#include "DigitalTimeException.h"
#include <iostream>
#include <string>

using namespace std;
//Constructor to set error number and error message
DigitalTimeException::DigitalTimeException(int error, string message)
{
    errNumber = error;
    errMessage = message;
    
}
//Returns the error message
string DigitalTimeException::getErrorMessage()
{
    return errMessage;
}
//Returns the error number
int DigitalTimeException::getErrorNumber()
{
    return errNumber;
}