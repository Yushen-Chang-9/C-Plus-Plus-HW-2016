//---------------------------------------------------------------------------
// CSC160 Homework 8 - Student.h
//
// This is the header file for the Student class
// This simple class has the following public members for use in this assignment:
//		- a one-argument constructor function that accepts a textual Student ID
//		- a public function named enroll that accepts a textual Section Number in which to enroll the student
// There is also a default constructor, which we don't intend to use
//
// The class also has some other members that you don't need to worry about.  In particular, there is a
//  private function that decides when to throw an exception.  That function will change in the several
//  versions of the class I will use to grade, so that your program won't be sure which call to a Student
//  function will actually throw an exception.
//	
// This implementation is artificial and only has enough programming so that we can play with exceptions
//  It will throw Exceptions somewhat randomly, so that your code that uses this class can practice
//  catching exceptions
//  There will be more than one version of the class implementation.  Each will throw errors in different ways.
//  Your homework assignment is to write a test program that uses Student objects and catches any and
//  all exceptions that might get thrown by any of the versions.
//---------------------------------------------------------------------------
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
public:
	Student();
    Student(string thisStudentID);
    void enroll(string thisSectionID);
private:
    string studentID;
	bool timeToThrow();
	static int sneakyCount;
};
#endif

