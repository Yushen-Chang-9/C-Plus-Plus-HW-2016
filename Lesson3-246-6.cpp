//
//  main.cpp
//  Lesson3-246-6
//
//  Created by Yushen Chang on 2/8/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include <iostream>

using namespace std;

double CompoundInterest(double balance,double rate,double month);
//This function will allow you to determine the interest you have accumalated based off your initail balance, interest rate and the number of months you will take to pay it off.

int main()


{
    //Declaration of Variables
    char choice;
    double month,rate,balance;
    //Start of Do-While Loop
    do
    {
        cout << "How much do you owe?: $";
        cin >> balance;
        cout << endl <<"What is your interest rate?(i.e 1.5% = 1.5)";
        cin >> rate;
        cout << endl <<"How many months will you take to pay for it?: ";
        cin >> month;
        cout << endl;
        
        //Your Result
        cout << "This is the interest you have accumalated: $" << (CompoundInterest(balance,rate,month)-balance) << endl;
        
        //Repeat Program Option
        cout << "would you like to repeat? press 'y' or 'Y', if NO then press any key." << endl;
        cin >> choice;
    }
    //End of Do-While Loop
    while (choice == 'y' || choice == 'Y');
    return 0;
}

double CompoundInterest(double balance,double rate,double month)
{
    //Start of For Loop
    for(int i = 0;i < month;i++)
    {
        double balanceDue,interestDue;
        
        balanceDue = balance + (balance * rate/100);
        interestDue = balanceDue + balance;
        balance = balanceDue;
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        
    }//End of For Loop
    
    return balance;
    
}

