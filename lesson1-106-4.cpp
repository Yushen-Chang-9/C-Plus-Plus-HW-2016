//
//  main.cpp
//  lesson1-106-4
//
//  Created by Yushen Chang on 1/27/16.
//  Copyright (c) 2016 frcc. All rights reserved.
//

#include <iostream>
using namespace std;
int main()


{
    double amount, interest, time, face_value;
    char choice;
   
    do{
    
//The loan amount
    cout<< "please enter the amount needed"<<endl;
    cin >> amount;
    
    
    
//Interest Rate (enter percent in decimal form i.e 5% = 0.05.)
    cout<< " enter interest rate in decimals"<< endl;
    cin>>interest;
    
//The time needed for amount (months)
    cout<< "enter amount of time"<<endl;
    cin>>time;
    
//Calculating Interest
    interest= interest/100;
    
//Face Value
    face_value=amount/(1-time*interest);

//Display of face value
    cout<<"need a loan with a face value of: $"<<face_value<<endl;
    
    
    
//Monthly installments
    cout << "the monthly istallments you will be paying is " << face_value/(time*12)<<endl;
    
//Repeat?
    cout<<"if you want to repeat for different values please press 'y' or press 'n' for no";
    cin>>choice;
}
    while(choice=='y');

    cout<< "goodbye";

    

    
    
   
    
    return 0;
}

