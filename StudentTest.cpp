//
//  main.cpp
//  StudentTest
//
//  Created by Yushen on 3/27/16.
//  Copyright © 2016 yushen. All rights reserved.
//Testing other classes with exceptions and stuff.

#include <iostream>
#include <cstdlib>
#include <string>
#include "Student.h"
#include "StudentException.h"

using namespace std;



int main()
{
    
    Student testStudent1("S0000001"), testStudent2("S0000002"), testStudent3("S0000003");
    
    
    try
    {
        testStudent1.enroll("CSC-160-500");
        testStudent2.enroll("CSC-161-500");
        testStudent3.enroll("PHI-112-500");
        
    }
    catch(StudentException e)
    {
        cout<<e.errorMessage()<<endl;
    }
    cout<<""<<endl;
    
    cout<<""<<endl;
    try
    {
        Student(testStudent1);
        Student(testStudent2);
        Student(testStudent3);
        
    }
    
    catch(StudentException e)
    {
        cout<<e.errorMessage()<<endl;
    }
    cout<<""<<endl;
    
    cout<<""<<endl;
    
    try
    {
        Student("S0000001");
        Student("S0000002");
        Student("S0000003");
        
    }
    
    catch(StudentException e)
    {
        cout<<e.errorMessage()<<endl;
    }
    cout<<""<<endl;
    
    cout<<""<<endl;
    
   
    return 0;
}

