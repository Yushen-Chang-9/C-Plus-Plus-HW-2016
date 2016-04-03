//---------------------------------------------------------------------------
// CSC160 Homework 8 - StudentException.cpp
//
// This is the implementation file for the StudentException class
//---------------------------------------------------------------------------
#include <string>
#include "StudentException.h"
using namespace std;

StudentException::StudentException(string whatWentWrong)
{
	// Set the stored message within the object
	// Any text will be accepted as the error message
	message = whatWentWrong;
}
// Return the error message stored inside the object
string StudentException::errorMessage()
{
	return message;
}


