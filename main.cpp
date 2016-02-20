//
//  main.cpp
//  practice run 4
//
//  Created by Yushen Chang on 2/8/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include <iostream>
using namespace std;

double Calculate (double initial_balance,double rate,int months);
int main()
{
    double initial_balance, rate;
    int months;
    char choice;
    do
    {
        cout << "Please enter your initial balance: ";
        cin >> initial_balance;
        cout << "Please enter the monthly interest rate(in percent form): ";
        cin >> rate;
        cout << "Please enter the number of months the bill has ran: ";
        cin >> months;
        cout << "Interest: $" << (Calculate(initial_balance,rate,months) - initial_balance) << endl;
        cout << "Total: $" << Calculate(initial_balance,rate,months) << endl;
        
        cout << " \n Would you like to repeat the calculations? (Press 'Y' or 'y' for yes) "; cin >> choice;
        
        
        
    } while(choice=='y'||choice=='Y');
    cout << "Farewell!" <<endl;
    
    return 0;
}
double Calculate(double initial_balance, double rate, int months)
{
    for (months;months > 0;months--)
    {
        initial_balance += (initial_balance * (rate/100));
    }
    return (initial_balance);
}