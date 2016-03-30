//
//  main.cpp
//  Lesson6-695-2
//  Chapter 11
//  Created by Yushen Chang on 3/11/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.


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

//Start Mainnn
int main()
{
    Rational frctn1,frctn2;
    char choice;
    
    do
    {
        //Getting Input From User
        cout <<"Enter first fraction (numerator / denominator): ";
        cin >> frctn1;
        cout<<"Enter second fraction (numerator/denominator):  ";
        cin>>frctn2;
        
        //Display Info
        cout<<"Rational numbers used for testing are: "<<endl;
        cout<<"Rational number 1: "<<frctn1<<endl;
        cout<<"Rational number 2: "<<frctn2<<endl;
        cout<<"Testing the conditional operations: "<<endl;
        
        //Test == operator
        cout << frctn1 << " == " << frctn2 <<": ";
        if(frctn1 == frctn2)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
        
        //Test < operator
        cout << frctn1 << " < " << frctn2<<": ";
        if(frctn1 < frctn2)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
        //Test <= operator
        cout << frctn1 << " <= " << frctn2 <<": ";
        if(frctn1 <= frctn2)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
        //Test > operator
        cout<< frctn1 << " > " << frctn2<<": ";
        if(frctn1 > frctn2)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
        //Test >= operator
        cout <<frctn1 << " >= " << frctn2<<": ";
        if(frctn1 >= frctn2)
        {
            cout<<"True"<<endl;
        }
        else
        {
            cout<<"False"<<endl;
        }
        
        cout<<"Here are the results: "<<endl;
        // test the + operator
        cout << frctn1 << " + " << frctn2 << " = "
        << (frctn1 + frctn2) << endl;
        // test the - operator
        cout << frctn1 << " - " << frctn2 << " = "
        << (frctn1 - frctn2) << endl;
        // test the * operator
        cout << frctn1<< " * " << frctn2 << " = "
        << (frctn1 * frctn2) << endl;
        // test the / operator
        cout << frctn1 << " / " << frctn2 << " = "
        << (frctn1 / frctn2) << endl;
        
        //Repeat program
        cout<<"press 'y' or 'Y' to repeat the process or press whatever to exit."<<endl;
        cin>>choice;
    }
    while(choice == 'y' || choice=='Y'); //End of do while
    
    return 0;
} // end of main function

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
