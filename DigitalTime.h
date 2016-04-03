//
//  Modified DigitalTime.hpp
//  Digital Time C++ Chapter8 PJ2
//
//  Created by Yushen on 3/26/16.
//  Copyright © 2016 yushen. All rights reserved.
//This is "Modified"

#ifndef Modified_DigitalTime_hpp
#define Modified_DigitalTime_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class DigitalTime
{
    //private members of class
private:
    int hour;
    int minute;
    //public members
public:
    //constructor of class
    DigitalTime( );
    
    //Parameterized constructor
    DigitalTime(int the_hour, int the_minute);
    
    //Overloads the >> operator for input values of type DigitalTime.
    friend istream& operator >>(istream& ins, DigitalTime& time);
    
    //Overloads the << operator for output values of type DigitalTime.
    friend ostream& operator <<(ostream& outs, const DigitalTime& time);
    
};

#endif /* Modified_DigitalTime_hpp */
