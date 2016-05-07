//
//  ManualShippingContainer.hpp
//  Lesson12-887-8
//
//  Created by Yushen on 5/6/16.
//  Copyright © 2016 yushen. All rights reserved.
//

#ifndef ManualShippingContainer_hpp
#define ManualShippingContainer_hpp
#include "ShippingContainer.hpp"
#include <stdio.h>
#include<vector>
#include<string>
#include<sstream>
#include <iostream>
using namespace std;

class ManualShippingContainer: public ShippingContainer
{
private:
    string elements;
    
    
public:
    
    
    ManualShippingContainer(int newID);
    void setManifest(string s);
    virtual string getManifest();
    
    
};

#endif /* ManualShippingContainer_hpp */
