//
//Lesson4-369-5.cpp
// Lesson4-369-5
//
//  Created by Yushen Chang on 2/20/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
//This is the second version made. First version was with strings.

//Declaration
void getAdvice(istream& in_stream);
void giveAdvice(ostream& out_stream);

//start of main
int main()
{
    //declarations
    ifstream fin;
    ofstream fout;
    fin.open("hw4pr02input.txt");
    
    //Test for failiur (in)
    if (fin.is_open()){
        cout << "Good news! it works!" << endl;
    }
    else
    {
        cout << "Bad news! it doesn't work :( " << endl;
        exit(1);
    }
    
    //Dislpay of file: giving out advice
    cout << "here is some advice for you" << endl;
    getAdvice(fin);
    fin.close();
    
    fout.open("hw4pr02input.txt");
    
    //Test for failiur (out)
    if (fout.is_open()){
        cout << "Good news! it works!" << endl;
    }
    else
    {
        cout << "Bad news! it doesn't work :( " << endl;
        exit(1);
    }
   
    
    //Dislpay of file: writing advice
    cout << "Time for you to give some advice back" << endl;
    cout << "Press return key twice after you have given advice"<<endl;
    
    giveAdvice(fout);
    fout.close();
    
    cout << "Thanks for the advice have a great day!"<< endl;
  
    }

void getAdvice(istream& in_stream)
{
    char next;
    do
    {
        in_stream.get(next);
        cout << next;
    }
    while (!in_stream.eof());
    }


void giveAdvice(ostream& out_stream)
    {
    char next;
    int quit = 1;
    while (quit == 1)
    {
    cin.get(next);
    out_stream << next;
        if (next == '\n')
        {
        cin.get(next);
        if (next == '\n')
    {
                quit = 0;
    }
    out_stream << next;
    }
    }
    }