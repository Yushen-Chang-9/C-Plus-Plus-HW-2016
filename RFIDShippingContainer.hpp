//
//  RFIDShippingContainer.hpp
//  Lesson12-887-8
//
//  Created by Yushen on 5/6/16.
//  Copyright © 2016 yushen. All rights reserved.
//

#ifndef RFIDShippingContainer_hpp
#define RFIDShippingContainer_hpp

#include <stdio.h>
#include<vector>
#include<string>
#include<sstream>
#include "ShippingContainer.hpp"
#include <iostream>
using namespace std;

class RFIDShippingContainer:public ShippingContainer
{
    
private:
    vector<int> count;
    vector<string> elements;
    int search(string s);
    
public:
    
    RFIDShippingContainer(int newID);
    void add(string s);
    virtual string getManifest();
    
    
};

#endif /* RFIDShippingContainer_hpp */
