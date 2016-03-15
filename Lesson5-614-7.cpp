//
//  main.cpp
//  Lesson5-614-7
//
//  Created by Yushen Chang on 3/4/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//This program lets you do math for fractions


#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class rational
{
public:
    void input(istream& instream);
    // gets rational number from specified input stream.
    void output(ostream& outstream);
    // outputs rational number to specified output stream.
    
    
    rational();
    rational neg();
    
    rational Add (rational otherFraction);
    rational Sub (rational otherFraction);
    rational Mul (rational otherFraction);
    rational Div (rational otherFraction);
    bool less(rational otherFraction);
    bool eq(rational otherFraction);
private:
    float numerator;
    float denominator;
};


//Start of main
int main()
{
    
    rational num1;
    rational num2;
    rational result;
    int choice;
    bool error;
    num1.input(cin);
    num2.input(cin);
    
    do{
        //Do While Loop for other options
        do {
            //Do While Loop for display
            //Display of Options
            error=false;
            cout<<"Enter a number from 1 to 7\n"
            << "1. Displays the sum of the two fractions\n"
            << "2. Displays the difference\n"
            << "3. Displays the product\n"
            << "4. Displays the quotient\n"
            << "5. Displays whether fraction 1< fraction 2\n"
            << "6. Displays the negative of fraction 1\n"
            << "7. Enter more rational numbers\n"
            << "8. Exit\n";
            cin>>choice;
            if(choice<1||choice>8)
            {
                cout << "Invalid entry\n" ;
                error=true;
            }
        }while(error); //End of Do While for display options
        
        cout << endl;
        
        
        switch (choice) //Giving User Options for Calculations from choices 1-8
        {
            case 1: // ADDITION
                cout<<endl;
                num1.output(cout);
                cout<<" + ";
                num2.output(cout);
                cout<<" = ";
                result=num1.Add(num2);
                result.output(cout);
                cout<<endl;
                break;
            case 2: // SUBTRACT
                num1.output(cout);
                cout<<" - ";
                num2.output(cout);
                cout<<" = ";
                result = num1.Sub(num2);
                result.output(cout);
                cout<<endl;
                break;
            case 3: // MULTIPLY
                num1.output(cout);
                cout<<" * ";
                num2.output(cout);
                cout<<" = ";
                result = num1.Mul(num2);
                result.output(cout);
                cout<<endl;
                break;
            case 4: // DIVISION
                num1.output(cout);
                cout<<" / ";
                num2.output(cout);
                cout<<" = ";
                result = num1.Div(num2);
                result.output(cout);
                cout<<endl;
                break;
            case 5: //LESS THAN, GREATER THAN, OR EQUAL
                if(num1.less(num2))
                {
                num1.output(cout);
                cout<<"<";
                num2.output(cout);
                cout<<endl;
                }
                else if(num1.eq(num2))
                {
                    num1.output(cout);
                    cout << " is equal to ";
                    num2.output(cout);
                    cout << "." << endl;
                }
            else
                {
                num1.output(cout);
                cout<<">=";
                num2.output(cout);
                cout<<endl;
                }
               
                break;
            case 6: //COMPUTES NEGATIVES OF FIRST FRACTION
                result=num1.neg();
                cout<<"negative of ";
                num1.output(cout);
                cout<<"=";
                result.output(cout);
                cout<<endl;
            case 7:
                num1.input(cin);
                num2.input(cin);
                break;
            case 8:
                return 0;
            default: cout << "Not an input between 1 and 7.\n";
                break;
        }
    }while(true);
    
}
bool rational::less(rational otherFraction)
{
    if(numerator*otherFraction.denominator<otherFraction.numerator*denominator)
    return true;
else
    return false;
}

bool rational::eq(rational otherFraction)
{
 
    if (otherFraction.numerator == numerator && otherFraction.denominator == denominator)
    {
        return true;
    }
    else return false;
    
}
rational rational::neg()
{
    rational negative;
    negative.numerator=numerator*-1;
    negative.denominator=denominator;
    return negative;
}

void rational::output(ostream& outstream)
{
    cout<<numerator<<"/"<<denominator<<" ";
}

void rational::input(istream& instream)
{
    char choice,slash,trash;
    cout<<"Enter a fraction: ";
    do{
        cin>>numerator>>slash>>denominator;
        if(denominator==0)
            cout<<"Illegal denominator - retry\n";
    }
    while(denominator==0);
    trash=getchar();
    if(numerator<0&&denominator<0)
    {
        numerator*=-1;
        denominator*=-1;
    }
    else if(numerator>=0&&denominator<0)
    {
        numerator*=-1;
        denominator*=-1;
    }
}
rational::rational() // default constructor
{
    
    numerator = 0;
    denominator = 0;
    
}
rational rational::Add(rational otherFraction)
{
    rational sum;
    sum.numerator = numerator*otherFraction.denominator+otherFraction.numerator*denominator;
    sum.denominator = denominator*otherFraction.denominator;
    return sum;
}

rational rational::Sub(rational otherFraction)
{
    rational difference;
    difference.numerator = numerator*otherFraction.denominator-otherFraction.numerator*denominator;
    difference.denominator = denominator*otherFraction.denominator;
    return difference;
}

rational rational::Mul(rational otherFraction)
{
    rational product;
    product.numerator = numerator*otherFraction.numerator;
    product.denominator = denominator*otherFraction.denominator;
    return product;
}

rational rational::Div(rational otherFraction)
{
    rational quotient;
    quotient.numerator = numerator*otherFraction.denominator;
    quotient.denominator = denominator*otherFraction.numerator;
    return quotient;
}