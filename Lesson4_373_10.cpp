//
//  main.cpp
//  Lesson4-373-10
//
//  Created by Yushen Chang on 2/21/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

//This program reads popular names of 2012

//Headers
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;






string name_search(string);

int main()
{
	string name;
	char answer;
    
	do
	{
        cout << "This program will search for  1000 of the most popular names of 2012 for male and female."<<endl;
        cout << "Enter the name you would like to search for: " << endl;
        cin >> name;
        
        name_search (name);
        
        cout << "Press 'y' or 'Y' to repeat search otherwise press any key to exit." << endl;
        cin >> answer;
	}
	while (answer == 'y' || answer == 'Y');
    
	return 0;
}


string name_search (string name)
{
    int rank;
    string male, female;
    ifstream infile;
    
    infile.open ("babynames2012.txt");
    
    if (infile.fail())
    {
        cout << "There were some issues with the file please check for existence."<< endl;
    }
    
    
    while (!infile.eof())
    {
        infile >> rank >> male >> female;
        
        if (name == male)
        {
            cout << name << " is ranked " << rank << " in popularity among boys"  << endl;
            break;
        }
        else
        {
            cout << name << " is not ranked among the top 1000 boys names." << endl;
            break;
        }
        if (name == female)
        {
            cout << name << " is ranked " << rank << " in popularity among girls." << endl;
            break;
        }
        else
        {
            cout << name << "is not ranked among the top 1000 girl names." << endl;
            break;
        }
    }
    return name;
}

