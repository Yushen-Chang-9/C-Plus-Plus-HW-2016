//---------------------------------------------------------------------------
// CSC160 Homework 8 - Student.h
//
// This is the implementation file for the Student class
// This implementation is artificial, and doesn't really try very hard to implement the Student class
//  What it does do is arbitrarily throw exceptions of type StudentException, so that your
//  program can practice catching those exceptions
//
//  The code that I use to generate the exceptions isn't part of the
//---------------------------------------------------------------------------
#include <string>
#include <iostream>
#include "Student.h"
#include "StudentException.h"
using namespace std;

// The constructor for this class accepts a Student ID
Student::Student(string thisStudentID)
{
	// This first statement updates a variable used to help decide when to Throw an Exception
	sneakyCount++;
	// Any text will be accepted as the student ID in this implementation
	if (!timeToThrow())
		studentID = thisStudentID;
	else
		throw StudentException("Student " + thisStudentID + " has been expelled from this school");
}
// This default constructor shouldn't be used, so throwing an exception isn't so artificial, its
// the right thing to do.  We will also find out if this constructor gets called at time that we don't expect.
Student::Student()
{
	// This first statement updates a variable used to help decide when to Throw an Exception
	sneakyCount++;
	throw StudentException("Incorrect Call to Student Constructor - No Student ID Provided");
}
// This dummy function would enroll the student in a course
void Student::enroll(string thisSectionID)
{
	// This first statement updates a variable used to help decide when to Throw an Exception
	sneakyCount++;
	if (!timeToThrow())
		cout << endl << "Student: " << studentID << " is now enrolled in " << thisSectionID << endl;
	else
		throw StudentException("Section " + thisSectionID + " has been cancelled");
	return;
}
// This is the code that helps decide when to throw an exception.  You are welcome to look at it,
// but its only here to help generate unexpected exceptions.  It will vary in different versions of Student
// as I play around with it. 
int Student::sneakyCount = 0;

bool Student::timeToThrow()
{
	if (sneakyCount == 4)
		return true;
	else
		return false;
}



