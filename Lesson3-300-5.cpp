//
//  main.cpp
//  Lesson3-300-5
//
//  Created by Yushen Chang on 2/10/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include <iostream>
#include<cmath>
using namespace std;

double weather(double wind, double temp, double windChillIndex);
char choice;
int main()
{
    do
    {
    //Start
    double wind, temp, windChillIndex =0;
    
    cout << "please enter wind speed.(i.e in m/s)" << endl;
    cin >> wind;
    
    cout << "please enter temperature.(i.e in degrees Celsius)" << endl;
    cin >> temp;
    
    windChillIndex = weather( wind, temp, windChillIndex);
    
    cout << "The wind chill index is " << windChillIndex << endl;
    
    //Repeat Calculaton?
        cout << "would you like to repeat, press 'y' or 'Y' for yes, if no press any key." << endl;
        cin >> choice;
    
        }
    while (choice == 'y' || choice == 'Y');
    return 0;
}

//Function Definition
double weather(double wind,double temp, double windChillIndex)
{
    
    return windChillIndex = (13.12 + 0.6215*temp-11.37*pow(wind,0.16)+0.3965*temp*pow(wind, 0.016));

    
    
}//The End of Program
