//
//  user.cpp
//  lesson7-737-5 The Other Version
//
//  Created by Yushen Chang on 3/18/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//


#include<iostream>
#include <string>
#include<cstring>
#include<deque>
#include "user.h"

//unamed namespace

namespace  {
    string username;
    
    //Define Function
    bool isValid()
    {
        int count=0;
        if(username.length()==8)
            for(int i=0; i<username.length();i++)
            {
                if((username[i] >= 'a' && username[i]<='z') || (username.length()>= 'A' && username[i]<='Z'))
                    count++;
            }
        if (count==8)
            return true;
        else return false;
                
                
            
    }//End Fucntion
    
}

namespace Authenticate {
    void inputUserName() {
        do
        {
            cout << "Enter your username (8 letters only)" << endl; cin >> username;
        } while (!isValid());
    }
    string getUserName() {
        return username; }
}
