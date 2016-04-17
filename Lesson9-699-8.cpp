//
//  main.cpp
//  Lesson9-699-8
//
//  Created by Yushen on 4/16/16.
//  Copyright © 2016 yushen. All rights reserved.

//NOT FINISHED YET!!!!!!!!!!!!!!!!!
#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;
const int TEST_COUNT = 10;


int main()

{
    
    NumberList testList;
    int number;
    char choice;
    do{//Start of Do-While
        
        cout<<"please enter values."<<endl;
        for (int i = 0; i < TEST_COUNT; i++)
        {
            
            cout << "Enter Value: ";
            cin >> number;
            testList.add_Number(number);
        }
        cout << "There are " << testList.get_array_size() << " values on the list"<<endl;
        cout << "The first value on the list is " << testList.get_Number(0)<<endl;
        cout << "The last value on the list is " << testList.get_Number(testList.get_array_size()-1)<<endl;
        testList.delete_Last_Number();
        cout << "After removing the last item, there are: " << testList.get_array_size() << " values on the list"<<endl;
        cout << "The first value on the list is " << testList.get_Number(0)<<endl;
        cout << "The new last value on the list is " << testList.get_Number(testList.get_array_size()-1)<<endl;
        cout<<"The new list is: \n"<<testList<<endl;
        
        //Prompt User 2 Repeat Program
        cout<<"Press 'Y' or 'y' to repeat program. otherwise hit any key to exit program."<<endl;
        cin>>choice;
    }//End of Do-While
    while(choice=='y' || choice=='Y');
    
    
    return 0;
}


