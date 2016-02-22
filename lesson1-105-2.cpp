//
//  main.cpp
//  lesson1-105-2
//
//  Created by Yushen Chang on 1/27/16.
//  Copyright (c) 2016 frcc. All rights reserved.
//

#include <iostream>
using namespace std;

int main()

{
    //Variable Declaration
    double radius, volume;
    
    //Constants
    const double pi = 3.1415;
    const double num = 4, den=3;
    

    
    //Input radius of sphere
    cout << "Enter radius of sphere."<<endl;
    cin>>radius;
    
    //Computation of volume
    volume = (num/den)*pi*radius*radius*radius;
    //Display of volume
    cout<< "The volume is "<<volume<<endl;
    
    

    //The End
    return 0;
}

