//
//  main.cpp
//  Lesson4-373-10
//
//  Created by Yushen Chang on 2/21/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

//This program will read a name from a text file and then display it on the screen

//Headers
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void name_search (string);


//Main: Start
int main ()
{
    //Variables
	string name;
	char choice;
    
	do
	{
        //The search of names for some year
        cout << "This program will search for top male and female names out of 1000." << endl;
		
		cout << "Enter the name you would like to search for: ";
		cin >> name; //Please enter first letter a uppercase, because this is case sensitive.
        
		name_search (name);
        
        //Repeat Program
		cout << "Press 'y' or 'Y' to repeat or anyother key to exit." << endl;
		cin >> choice;
	}
	while (choice == 'y' || choice == 'Y');
    
	return 0;
} //Main: End



//Void: Start
void name_search (string name)
{
	int rank;
	string male, female;
	ifstream infile;
	bool male_name_found=false,female_name_found=false;
    
	infile.open ("babynames2012.txt");
    
	if (infile.fail())
	{
		cout << "There was an error while search for the file please check existence of file.txt." << endl;
	}
    
	while (!infile.eof())
	{
		infile >> rank >> male >> female;
		
        
		if(name == male && name != female)//Existence of male name, but not female name.
		{
			cout << name << " is ranked " << rank << " in popularity among boys." << endl;
			male_name_found=true;
		}
		else if(name != male && name == female)//Existence of female name, but not male name.
		{
			cout << name << " is ranked " << rank << " in popularity among girls."<< endl;
			female_name_found=true;
		}
		else if (name == male && name == female)//Existence of both genders.
		{
			cout << name << " is ranked " << rank << " in popularity among boys." << endl;
			cout << name << " is ranked " << rank << " in popularity among girls." <<endl;
			male_name_found=true;
			female_name_found=true;
		}
		
	}
	//No Existence of names for both genders.
    if(male_name_found==false)
		cout<<"Name not listed among 1000 male names"<<endl;
	if(female_name_found==false)
		cout<<"Name not listed among 1000 female names"<<endl;
	infile.close();
}

