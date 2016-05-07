//
//  ShippingContainer.hpp
//  Lesson12-887-8
//
//  Created by Yushen on 5/6/16.
//  Copyright © 2016 yushen. All rights reserved.
//

#ifndef ShippingContainer_hpp
#define ShippingContainer_hpp

#include <stdio.h>
#include<vector>
#include<string>
#include<sstream>
#include <iostream>

using namespace std;

class ShippingContainer
{
    
private:
    int id;
    
    
public:
    ShippingContainer();
    ShippingContainer(int newID);
    int getID();
    void setID(int newID);
    virtual string getManifest();
    
    
    
    
    
    
};

#endif /* ShippingContainer_hpp */
