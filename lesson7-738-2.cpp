//
//  main.cpp
//  Lesson7-738-2
//
//  Created by Yushen Chang on 3/18/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include <iostream>

#include "rational.h"

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