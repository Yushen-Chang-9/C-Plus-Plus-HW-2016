//
//  rational.h
//  Lesson7-738-2
//
//  Created by Yushen Chang on 3/18/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#ifndef __Lesson7_738_2__rational__
#define __Lesson7_738_2__rational__

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;




class Rational
{
public:
    
    // constructors
    Rational();
    Rational(int num, int den);
    Rational(int whole_number);
    
    
    // friend functions to overload
    
    friend istream& operator >>(istream&, Rational& rational);
    
    friend ostream& operator <<(ostream&, const Rational& rational);
    
    
    friend bool operator ==(const Rational& frctn1, const Rational& frctn2);
    
    friend bool operator <(const Rational& frctn1, const Rational& frctn2);
    
    friend bool operator <=(const Rational& frctn1, const Rational& frctn2);
    
    friend bool operator >(const Rational& frctn1, const Rational& frctn2);
    
    friend bool operator >=(const Rational& frctn1, const Rational& frctn2);
    
    friend Rational operator +(const Rational& frctn1, const Rational& frctn2);
    
    friend Rational operator -(const Rational& frctn1, const Rational& frctn2);
    
    friend Rational operator *(const Rational& frctn1, const Rational& frctn2);
    
    friend Rational operator /(const Rational& frctn1, const Rational& frctn2);
    
    void reduce();
    int getNum();
    int getDen();
private:
    // member variables
    int numerator;
    int denominator;
}; // end of Rational class definition

#endif /* defined(__Lesson7_738_2__rational__) */
