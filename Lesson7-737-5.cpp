//
//  main.cpp
//  lesson7-737-5 The Other Version
//
//  Created by Yushen Chang on 3/16/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//


#include<iostream>

#include<string>

#include "password.h"
#include "user.h"
#include<cctype>
#include<cstdlib>
using namespace std;
using namespace Authenticate;



int main(){
    
    
    inputUserName();
    inputPassword();
    
    cout<<"your name is "<<getUserName()<< "and your password is "<<getPassword()<<endl;
    
    
    
    
    return 0;
    
}