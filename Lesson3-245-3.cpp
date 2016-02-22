//
//  main.cpp
//  Lesson3-245-3
//
//  Created by Yushen Chang on 2/10/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//


#include <iostream>
using namespace std;
//Prototype
double stockPrice(int whole, int num, int den);


int main ()
{
    //Declaration of Variables
    int whole, num, den;
    int shares;
    char choice;
    
    do
    {
        cout << "Please enter whole stock" << endl;
        cin >> whole;
        cout << " please enter numerator" <<endl;
        cin >> num;
        cout << "please enter denominator" << endl;
        cin >> den;
        cout<< "please enter stock shares." << endl;
        cin >> shares;
        
        //Function Call
        double singleValue = stockPrice(whole, num, den);
        double totalValue = singleValue * shares;
        cout << whole << " " << num << "/" << den << endl;
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        
        cout << "price of single stock is: $" << singleValue << endl;
        cout << "price of total value is: $" << totalValue << endl;
        
        
        //Replay Program Option
        cout << "would you like to repeat this program? 'y' or 'Y' for yes, if no then press any key." << endl;
        cin >> choice;
        
        
    }
    while (choice == 'y' || choice == 'Y');
    
    return 0;
    
}


//Function Defintion
double stockPrice(int whole, int num,int den)
{
    
    double interestDue = whole + static_cast<double>(num)/den;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    return interestDue;
}






