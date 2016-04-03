//
//  Modified DigitalTime.cpp
//  Digital Time C++ Chapter8 PJ2
//
//  Created by Yushen on 3/26/16.
//  Copyright © 2016 yushen. All rights reserved.
//This is "Modified"

#include "DigitalTime.h"
#include "DigitalTimeException.h"
#include <iostream>
#include <cctype>
#include <cstdlib>


using namespace std;


//Function Declaration
void getHour(istream& ins, int& the_hour);
void getMinute(istream& ins, int& the_minute);
//converts character to digit
int ctoi(char c);

//Constructor
DigitalTime::DigitalTime( )
{
    this->hour=0;
    this->minute=0;
}


DigitalTime::DigitalTime(int hour, int minute)
{
   
    if (hour < 0 || hour > 23 ||minute < 0 || minute > 59)
    {
        throw DigitalTimeException (101, "invalid digital time is set.");
    }
    else
    {
        this->hour = hour;
        this->minute = minute;
    }
}


//Overload << operator to print DigitalTime
ostream& operator <<(ostream& outs, const DigitalTime& time)
{
   
    outs << time.hour << ':';
    
    if (time.minute < 10)
        outs << '0';
    outs << time.minute;
    return outs;
}

//Overload >> operator to print DigitalTime
istream& operator >>(istream& ins, DigitalTime& time)
{
    
    getHour(ins, time.hour);
    getMinute(ins, time.minute);
    return ins;
}


//Converts character letter to digit
int ctoi(char c)
{
    return (int(c) - int('0'));
}

void getMinute(istream& ins, int& minute)
{
    char c1, c2;
    ins >> c1 >> c2;
    
    if (!(isdigit(c1) && isdigit(c2)))
    {
        throw DigitalTimeException (102, "invalid minute\n");
    }
    
    minute = ctoi(c1)*10 + ctoi(c2);
    
    if (minute < 0 || minute > 59)
    {
        throw DigitalTimeException (102, "invalid minute\n");
    }
}

void getHour(istream& ins, int& hour)
{
    char c1, c2;
    ins >> c1 >> c2;
    if ( !( isdigit(c1) && (isdigit(c2) || c2 == ':' ) ) )
    {
        throw DigitalTimeException(103, "invalid hour\n");
        
    }
    
    if (isdigit(c1) && c2 == ':')
    {
        hour = ctoi(c1);
    }
    else
    {
        hour = ctoi(c1)*10 + ctoi(c2);
        
        ins >> c2;
        if (c2 != ':')
        {
            throw DigitalTimeException (103, "invalid hour\n");
        }
    }
    
    if ( hour < 0 || hour > 23 )
    {
        throw DigitalTimeException (104, "invalid hour\n");
    }
}

