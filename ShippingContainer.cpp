//
//  ShippingContainer.cpp
//  Lesson12-887-8
//
//  Created by Yushen on 5/6/16.
//  Copyright © 2016 yushen. All rights reserved.
//
#include "ShippingContainer.hpp"
#include "RFIDShippingContainer.hpp"
#include "ManualShippingContainer.hpp"
#include<vector>
#include<string>
#include<sstream>
#include <iostream>
using namespace std;


ShippingContainer::ShippingContainer()
{
    id =-1;
}
ShippingContainer::ShippingContainer(int newID)
{
    id = newID;
    
}

int ShippingContainer::getID()
{
    return id;
}


void ShippingContainer::setID(int newID)
{
    id = newID;
}

string ShippingContainer::getManifest()
{
    return " ";
}
    
    
    
    
  