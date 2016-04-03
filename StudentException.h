//---------------------------------------------------------------------------
// CSC160 Homework 8 - StudentException.h
//
// This is the header file for the StudentException class
// This class has the following members:
//		- a one-argument constructor function that accepts a textual error message
//		- a private member variables to hold the error message
//		- a public accessor function named errorMessage to retrieve the stored message
// In this simple implementation all text strings are considered valid error messages
//---------------------------------------------------------------------------
#ifndef STUDENTEXCEPTION_H
#define STUDENTEXCEPTION_H
#include <string>
using namespace std;

class StudentException
{
public:
    StudentException(string thisErrorMessage);
    string errorMessage();
private:
    string message;
};
#endif

