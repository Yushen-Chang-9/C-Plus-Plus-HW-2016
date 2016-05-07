//
//  ManualShippingContainer.cpp
//  Lesson12-887-8
//
//  Created by Yushen on 5/6/16.
//  Copyright © 2016 yushen. All rights reserved.
//

#include "ShippingContainer.hpp"
#include "RFIDShippingContainer.hpp"
#include "ManualShippingContainer.hpp"
#include <iostream>
#include<vector>
#include<string>
#include<sstream>


ManualShippingContainer::ManualShippingContainer(int newID): ShippingContainer(newID)
{
    
}

void ManualShippingContainer::setManifest(string s)
{
   elements=s;
}
string ManualShippingContainer::getManifest()
{
    return elements;
}

