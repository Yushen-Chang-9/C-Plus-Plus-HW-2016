//
//  rational.cpp
//  Lesson7-738-2
//
//  Created by Yushen Chang on 3/18/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include "rational.h"
Rational::Rational()
{
    numerator = 0;
    denominator = 1;
}
Rational::Rational(int whole_number)
{
    numerator = whole_number;
    denominator = 1;
}
Rational::Rational(int num, int den)
{
    numerator = num;
    denominator = den;
    this -> reduce();
}

ostream& operator <<(ostream& output, const Rational& rational)
{
    output << rational.numerator << "/" << rational.denominator;
    return output;
}
istream& operator>>(istream& input, Rational& rational)
{
    char error;
    input >> rational.numerator >> error >> rational.denominator;
    if (error != '/')
    {
        cout << "This is not a valid entry!"<<endl;
        exit(1);
    }
    rational.reduce();
    return input;
}
Rational operator+(const Rational& frctn1, const Rational& frctn2)
{
    int a = frctn1.numerator;
    int b = frctn1.denominator;
    int c = frctn2.numerator;
    int d = frctn2.denominator;
    Rational temp(a * d + b * c, b * d);
    temp.reduce();
    return temp;
}
Rational operator-(const Rational& frctn1, const Rational& frctn2)
{
    int a = frctn1.numerator;
    int b = frctn1.denominator;
    int c = frctn2.numerator;
    int d = frctn2.denominator;
    Rational temp(a * d - b * c, b * d);
    temp.reduce();
    return temp;
}
Rational operator/(const Rational& frctn1, const Rational& frctn2)
{
    int a = frctn1.numerator;
    int b = frctn1.denominator;
    int c = frctn2.numerator;
    int d = frctn2.denominator;
    Rational temp(a * d, b * c);
    temp.reduce();
    return temp;
}
Rational operator*(const Rational& frctn1, const Rational& frctn2)
{
    int a = frctn1.numerator;
    int b = frctn1.denominator;
    int c = frctn2.numerator;
    int d = frctn2.denominator;
    Rational temp(a * c, b * d);
    temp.reduce();
    return temp;
}
bool operator>(const Rational& frctn1, const Rational& frctn2)
{
    return frctn1.numerator * frctn2.denominator > frctn2.numerator * frctn1.denominator;
}
bool operator<(const Rational& frctn1, const Rational& frctn2)
{
    return frctn1.numerator * frctn2.denominator < frctn2.numerator * frctn1.denominator;
}
bool operator<=(const Rational& frctn1, const Rational& frctn2)
{
    return frctn1.numerator * frctn2.denominator <= frctn2.numerator * frctn1.denominator;
}
bool operator>=(const Rational& frctn1, const Rational& frctn2)
{
    return frctn1.numerator * frctn2.denominator >= frctn2.numerator * frctn1.denominator;
}
bool operator==(const Rational& frctn1, const Rational& frctn2)
{
    return frctn1.numerator * frctn2.denominator == frctn2.numerator * frctn1.denominator;
}


void Rational::reduce()
{
    if (denominator == 0)
    {
        cout << "The denominator cannot be zero that is impossible"<<endl;
        exit(1);
    }
    if (denominator < 0)
    {
        numerator *= -1;
        denominator *= -1;
    }
    int a = abs(numerator);
    int b = denominator;
    int temp;
    
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    numerator /= a;
    denominator /= a;
}

int Rational::getDen()
{
    return denominator;
}
int Rational::getNum()
{
    return numerator;
}
