//
//  main.cpp
//  Lesson12-887-8
//
//  Created by Yushen on 5/6/16.
//  Copyright © 2016 yushen. All rights reserved.
//
//rfidContainer.add(“crate of pears”);
// Add one crate of pears rfidContainer.add(“crate of apples”);
// Add one crate of apples rfidContainer.add(“crate of pears”);
// Add one crate of pears
//Finally, write a main program that creates an array of pointers to six ShippingContainer objects. Instantiate the array with three ManualShippingContainer objects and three RFIDShippingContainer objects. For the ManualShippingContainer objects, you will have to invoke setManifest to set the contents. For the RFIDShippingContainer objects, you will have to invoke add to set the contents (although, if this were real, the contents of the container would “add” themselves via the rFID chips instead of requiring a human to type them in). Finally, write a loop that iterates through all ShippingContainer pointers and outputs each object’s manifest along with the shipping container ID. This is the output that the receiver of the shipping containers would like to see.



#include <iostream>
#include<vector>
#include<string>
#include "ShippingContainer.hpp"
#include "RFIDShippingContainer.hpp"
#include "ManualShippingContainer.hpp"
#include<sstream>
using namespace std;

int main() {
    
    ShippingContainer* container[6];
    ManualShippingContainer ManualShippingContainer1(100), ManualShippingContainer2(200), ManualShippingContainer3(300);
    RFIDShippingContainer RFIDContainer1(400), RFIDContainer2(500),RFIDContainer3(600);
    
    
    ManualShippingContainer1.setManifest("1000 diapers");
    ManualShippingContainer2.setManifest("1000 Candy Bars");
    ManualShippingContainer3.setManifest("500 Books");
    RFIDContainer1.add("crates of apples");
    RFIDContainer1.add("crates of apples");
    RFIDContainer1.add("crates of cookies");
    RFIDContainer2.add("crates of pineapple");
    RFIDContainer2.add("crates of pears");
    RFIDContainer2.add("crates of pineapple");
    RFIDContainer2.add("crates of pears");
    RFIDContainer3.add("crates of Choclate Bars");
    RFIDContainer3.add("crates of Choclate Bars");
    RFIDContainer3.add("crates of Choclate Bars");
    
    
    container[0]=&ManualShippingContainer1;
    container[1]=&ManualShippingContainer2;
    container[2]=&ManualShippingContainer3;
    container[3]=&RFIDContainer1;
    container[4]=&RFIDContainer2;
    container[5]=&RFIDContainer3;
    
    
    for(unsigned int i=0; i<6; i++)
    {
        cout<<"Container: "<<container[i]->getID()<<" contains "<<container[i]->getManifest()<<endl;
        cout<<endl;
    }
    return 0;
}
