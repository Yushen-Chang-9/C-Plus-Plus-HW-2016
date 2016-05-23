//
//  main.cpp
//  Andreas rodriguez
//
//  Created by Yushen on 5/22/16.
//  Copyright © 2016 yushen. All rights reserved.
//Does Andreas smell like crap?
//This program will decide wheter Andreas smells like garbage.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //Variable Declaration
    int x;
    int y;
    int z;
    cout<<"Please enter a value"<<endl;
    cin>>x;
     cout<<"Do you wear the same shirt all the time?"<<endl;
    cout<<"please enter a number"<<endl;
    
    cin>>y;
    cout<<"please enter a number"<<endl;
    cin>>z;
    
    
    cout<<"is your name Andreas?: "<<endl;
    cout<<"if you entered a value greater than 1 then that sux for you haha"<<endl;
    if (x>1) {
        cout<<"then you smell like crap and probally wear the same shirt all the time" << endl;
        
    } else {
        cout<<"your not Andreas congrats for not wearing the same shirt all the time!"<<endl;
    }

    if (y<1) {
     
        cout<<"Because of your answer you smell like crap and you look like Andreas"<<endl;
        
    } else {
        cout<<"you are a clean person and you are in no way like Andreas"<<endl;
    }
    
    if (z<1) {
        cout<<"you wear the same shirt all the time, please change it!"<<endl;
    } else {
        cout<<"you have great hygine, keep it up!"<<endl;
    }
   
    return 0;
}
