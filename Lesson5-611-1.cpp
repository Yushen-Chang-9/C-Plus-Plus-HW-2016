// main.cpp
// Lesson5-611-1
//
//Created by Yushen Chang on 3/1/16.
//Copyright (c) 2016 yushen chang. All rights reserved.
//
//My Test Homework chapter 10 project 1
//This where I test my bad programing skills
//Lots of trial and error
//Brought you by Carl's Jr!
//Library of stuff
#include <iostream>
using namespace std;

//First Order
class CDAccount
{
    
public:
    //Defult Constructor
	CDAccount ();
    //Parameterized constructor
	CDAccount(double new_balance, double interest_rate, int new_term);
	//Declaring Member Functions
    double get_initial_balance();
	double get_mature_balance();
	double get_interest_rate();
	int get_term();
	void input (istream &istr);
	void output (ostream &ostr);
	void output2 (ostream &ostr);
    
private:
    //Declare Variables
	double balance;
	double interest_rate;
	int term;
};//End of First

//Second Order
class CDAccountTwo
{
public:
    //Defult Constructor
	CDAccountTwo ();
    //Parameterized constructor
	CDAccountTwo(double new_balance, double interest_rate, int new_term);
    //Declaring Member Functions
	double get_initial_balance();
	double get_mature_balance();
	double get_interest_rate();
	int get_term();
	void input (istream &istr);
	void output (ostream &ostr);
    void output2 (ostream &ostr);
private:
	double balance;
	double interest_rate;
	int term;
};//End of Second

//Start of Main
int main()
{
    //Construct with parameters
	CDAccount account(1000, 4.0, 8);
	account.output(cout);
    //Prompt the user to input
	cout << "Please enter values for initial balance, interest rate (i.e 5.4%=5.4), and term:" << endl;
	account.input(cin);
	account.output2(cout);
    
	return 0;
}//The End of Main


CDAccount::CDAccount ()
{
	balance = 0;
	interest_rate = 0;
	term = 0;
}

CDAccount::CDAccount(double new_balance, double new_interest_rate, int new_term) :
balance(new_balance), interest_rate(new_interest_rate), term(new_term)
{
}
//Method Definition for initial balance
double CDAccount::get_initial_balance()
{
	return balance;
}
//Method Defintion for maturity
double CDAccount::get_mature_balance()
{
	double interest = balance * (interest_rate / 100) * (term / 12.0);
	return balance + interest;
}
//Method Definition for interest rate
double CDAccount::get_interest_rate()
{
	return interest_rate;
}
//Method defintion for term
int CDAccount::get_term()
{
	return term;
}
//Parameter: Istream
void CDAccount::input (istream &istr)
{
	istr >> balance;
	istr >> interest_rate;
	istr >> term;
}
//Parameter; Ostream
void CDAccount::output (ostream &ostr)
{
	ostr.setf(ios::fixed);
	ostr.setf(ios::showpoint);
	ostr.precision(2);
    //Lets star the testing for this program
    cout<< "Test Program for CDAccount class" << endl;
    cout<<"Testing individual accessor functions"<<endl;
	
    ostr << "First Account Initial Balance: $" << get_initial_balance() << endl;
	ostr << "First Account Rate: " << get_interest_rate() << "%" << endl;
	ostr << "First Account Term: " << get_term() << endl;
	ostr << "First Account Final Balance: $" << get_mature_balance() << endl;
	ostr << endl;
	//Display of program
	ostr << "Initial Account Balance is $" << get_initial_balance() << endl;
	ostr << "Interest Rate is " << get_interest_rate() << "%" <<  endl;
	ostr << "Term in month is " << get_term() << endl;
	ostr << "First Account Final Balance: $" << get_mature_balance() << endl;
	ostr << endl;
	cout << "Testing the member function that writes the summary of the object:\n" << endl;
    
}
//Parameter: Ostream
void CDAccount::output2 (ostream &ostr)
{
	ostr.setf(ios::fixed);
	ostr.setf(ios::showpoint);
	ostr.precision(2);
	//Display of program for final
	ostr << "Initial Account Balance is $" << get_initial_balance() << endl;
	ostr << "Interest Rate is " << get_interest_rate() << "%" <<  endl;
	ostr << "Term in month is " << get_term() << endl;
	ostr << "Final Balance will be $" << get_mature_balance() << endl;
	ostr << endl;
    
}
//End of program

