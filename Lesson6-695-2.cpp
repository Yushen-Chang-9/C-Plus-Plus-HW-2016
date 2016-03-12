//
//  main.cpp
//  Lesson6-695-2
//
//  Created by Yushen Chang on 3/11/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//A tough program and felt like it was never ending, but finally it is done.

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


using namespace std;
// Rational class definition
class Rational
{
public:
    
    // constructors
    Rational(int num, int den);
    Rational(int whole_number);
    Rational();
  
    // friend functions
    // function to overload the >> operator
    friend istream& operator >>(istream&, Rational&);
    // function to overload the << operator
    friend ostream& operator <<(ostream&, const Rational&);
    // function to overload the == operator
    friend bool operator ==(const Rational&, const Rational&);
    // function to overload the < operator
    friend bool operator <(const Rational&, const Rational&);
    
    // function to overload the <= operator
    friend bool operator <=(const Rational&, const Rational&);
    // function to overload the > operator
    friend bool operator >(const Rational&, const Rational&);
    // function to overload the >= operator
    friend bool operator >=(const Rational&, const Rational&);
    // function to overload the + operator
    friend Rational operator +(const Rational&, const Rational&);

    // function to overload the - operator
    friend Rational operator -(const Rational&, const Rational&);
    // function to overload the * operator
    friend Rational operator *(const Rational&, const Rational&);
    // function to overload the / operator
    friend Rational operator /(const Rational&, const Rational&);
   // Declare two member variables numerator and denominator.
private:
    // member variables
    int numerator;
    int denominator;
}; // end of Rational class definition
// function prototypes
void fraction_normalization(int &num, int &den);
int greatest_common_divisor(int number1, int number2);



// two parameters constructor Rational(int, int)
Rational::Rational(int num, int den)
{
    /* call the fraction_normalization function to normalize the fraction */
    fraction_normalization(num, den);
    numerator = num;
    denominator = den;
    // verify whether the denominator is zero
    if(denominator == 0)
    {
        cout << "Denominator should not be zero." << endl;
        
        exit(1);
    } // end if
} // end of constructor



// one parameter constructor Rational(int)
Rational::Rational(int whole_number)
{
    numerator = whole_number;
    denominator = 1;
} // end of constructor


// default constructor
Rational::Rational()
{
    numerator = 0;
    denominator = 1;
} // end of constructor

// operator >>() function definition
istream& operator >>(istream& input, Rational& frctn)
{
    // local variable
    char ch;
    // read the fraction entered by user
    input >> frctn.numerator >> ch >> frctn.denominator;
    // verify whether the second character is / or not
    if(ch != '/')
    {
        cout << "Wrong input: " << ch << endl;
        system("pause");
        exit(1);
    }
    /* call the fraction_normalization function to normalize the fraction */
    fraction_normalization(frctn.numerator, frctn.denominator);
    return input;
} // end of function

// operator <<() function definition
ostream& operator <<(ostream& output, const Rational& frctn)
{
    // display the simplified fraction to the user
    output << frctn.numerator << '/' << frctn.denominator;
    return output;
} // end of function

// operator ==() function definition
bool operator ==( const Rational& frctn1, const Rational&
                 frctn2)
{
    return frctn1.numerator * frctn2.denominator == frctn2.numerator * frctn1.denominator;
} // end of function
// operator <() function definition
bool operator <(const Rational& frctn1, const Rational&
                frctn2)
{
    return frctn1.numerator * frctn2.denominator < frctn2.numerator * frctn1.denominator;
} // end of function
// operator <=() function definition
bool operator <=(const Rational& frctn1, const Rational&
                 frctn2)
{
    return frctn1.numerator * frctn2.denominator <= frctn2.numerator * frctn1.denominator;
} // end of function
// operator >() function definition
bool operator >(const Rational& frctn1, const Rational&
                frctn2)
{
    return frctn1.numerator * frctn2.denominator > frctn2.numerator * frctn1.denominator;
} // end of function
// operator >=() function definition
bool operator >=(const Rational& frctn1, const Rational&
                 frctn2)
{
    return frctn1.numerator * frctn2.denominator >= frctn2.numerator * frctn1.denominator;
} // end of function


// operator +() function definition
Rational operator +(const Rational& frctn1, const Rational& frctn2)
{
    // local variables
    int n; // numerator
    int d; // denominator
    Rational addition;
    // calculate the addition of two fractions
    n = frctn1.numerator * frctn2.denominator + frctn1.denominator * frctn2.numerator;
    d = frctn1.denominator * frctn2.denominator;
    /* call the fraction_normalization function to normalize the fraction */
    fraction_normalization(n, d);
    addition = Rational(n, d);
    return addition;
} // end of function

// operator -() function definition
Rational operator -(const Rational& frctn1, const Rational&
                    frctn2)
{
    // local variables
    int n; // numerator
    int d; // denominator
    Rational subtraction;
    // calculate the subtraction of two fractions
    n = frctn1.numerator * frctn2.denominator - frctn1.denominator * frctn2.numerator;
    d = frctn1.denominator * frctn2.denominator;
    /* call the fraction_normalization function to normalize the fraction */
    fraction_normalization(n, d);
    subtraction = Rational(n, d);
    return subtraction;
} // end of function

// operator *() function definition
Rational operator *(const Rational& frctn1, const Rational& frctn2)
{
    // local variables
    int n; // numerator
    int d; // denominator
    Rational multiplication;
    // calculate the multiplication of two fractions
    n = frctn1.numerator * frctn2.numerator;
    d= frctn1.denominator * frctn2.denominator;
    /* call the fraction_normalization function to normalize the fraction */
    fraction_normalization(n, d);
    multiplication = Rational(n, d);
    return multiplication;
} // end of function

// operator /() function definition
Rational operator /(const Rational& frctn1, const Rational& frctn2)
{
    // local variables
    int n; // numerator
    int d; // denominator
    Rational division;
    // calculate the division of two fractions
    n = frctn1.numerator * frctn2.denominator;
    d = frctn1.denominator * frctn2.numerator;
    /* call the fraction_normalization function to normalize the fraction */
    fraction_normalization(n, d);
    division = Rational(n, d);
    return division;
} // end of function

// start main function
int main()
{
   
    // create instances for Rational class
    Rational rational;
    // Test the constructors
    // test the constructor Rational()
    rational = Rational();
    cout << "Result of Rational() constructor: "
    << rational << endl;
    // test the constructor Rational(int)
    rational = Rational(2);
    cout << "Result of Rational(int) constructor: "
    << rational << endl;
    // test the constructor Rational(int, int)
    rational = Rational(12, -18);
    cout << "Result of Rational(int, int) constructor: "
    << rational << endl;
    // test >> and << operators
    cout <<"Enter a fraction (numerator / denominator): ";
    cin >> rational;
    cout << "The equivalent fraction is: "
    << rational << endl<<endl;
   
    // create two objects for Rational class
    Rational rational1 = Rational(1, 2);
    Rational rational2 = Rational(2, 3);
    cout<<"Rational numbers used for testing are: "<<endl;
    cout<<"Rational number - 1: "<<rational1<<endl;
    cout<<"Rational number - 2: "<<rational2<<endl<<endl;
    cout<<"Testing the conditional operations: "<<endl;
    // test the == operator
    cout << "Is " << rational1 << " == " << rational2 << "?: " ;
    if(rational1 == rational2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    
    // test the < operator
    cout << "Is " << rational1 << " < " << rational2 << "?: " ;
    if(rational1 < rational2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    // test the <= operator
    cout << "Is " << rational1 << " <= " << rational2
    << "?: " ;
    if(rational1 <= rational2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    // test the > operator
    cout << "Is " << rational1 << " > " << rational2
    << "?: " ;
    if(rational1 > rational2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    // test the >= operator
    cout << "Is " << rational1 << " >= " << rational2
    << "?: " ;
    if(rational1 >= rational2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
   
    
    // test the + operator
    cout << rational1 << " + " << rational2 << " = "
    << (rational1 + rational2) << endl;
    // test the - operator
    cout << rational1 << " - " << rational2 << " = "
    << (rational1 - rational2) << endl;
    // test the * operator
    cout << rational1 << " * " << rational2 << " = "
    << (rational1 * rational2) << endl;
    // test the / operator
    cout << rational1 << " / " << rational2 << " = "
    << (rational1 / rational2) << endl;
    
   
    return 0;
} // end of main function

// fraction_normalization function definition
void fraction_normalization(int& num, int& den)
{
    // local variable
    int gcd;
    // call greatest_common_divisor
    gcd = greatest_common_divisor(num, den);
    num = num / gcd;
    den = den / gcd;
    // change the sign of the fraction if requires
    if (num > 0 && den < 0 || num < 0 && den < 0)
    {
        num = -num;
        den = -den;
    } // end if
} // end of normalize function
///////////////////////////////////////Danger Zone////////////////////////////////////////////////////////////////////


// greatest_common_divisor function definition
int greatest_common_divisor(int number1, int number2)
{
    // local variables
    int temp;
    int remainder;
    // get the absolute values
    number1 = abs(number1);
    number2 = abs(number2);
    // verify whether the number1 is greater than number2
    if (number1 > number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    } // end if
    // find the remainder
    remainder = number1 % number2;
    // repeat the loop until the remainder not equals to 0
    while (remainder != 0)
    {
        remainder = number1 % number2;
        number1 = number2;
        number2 = remainder;
    } // end while
    // return the gcd
    return number1;
} // end of greatest_common_divisor function