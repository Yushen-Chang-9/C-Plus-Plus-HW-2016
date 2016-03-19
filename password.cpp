//
//  password.cpp
//  lesson7-737-5 The Other Version
//
//  Created by Yushen Chang on 3/18/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//



#include<iostream>
#include<string>
#include "password.h"
using namespace std;


namespace  {
    string password;
    int count;
    
    //Define Function
    bool isValid()
    {
        int count=0;
        if(password.length()==8)
            for(int i=0; i<password.length();i++)
    
                if((password[i] >= 'a' && password[i]<='z') || (password.length()>= 'A' && password[i]<='Z'))
                { count++;
            }
    
    if(count>0 && count<8)
        return true;
    else
        return false;
        
        
    }//End Fucntion
    
}

namespace Authenticate {
    void inputPassword() {
        do
        {
            cout << "Enter your password (at least 8 characters " <<
            "and at least one nonletter)" << endl; cin >> password;
        } while (!isValid()); }
    string getPassword() {
        return password; }
}