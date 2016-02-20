//
//  main.cpp
//  Lesson4-369-5
//
//  Created by Yushen Chang on 2/20/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//uses advice.dat

void getAdvice();
void giveAdvice();

int main(){
    getAdvice();
    giveAdvice();
    return 0;
}

void getAdvice(){
    string advice="";
    ifstream infile("hw4pr02input.txt");
    if(!infile){
        cout << "Always know what your program is required to do before you begin writing any lines of code." <<endl;
        cout << "Error please check for existence of txt files!" << endl;
    }
    else{
        do{
            getline(infile,advice);
            cout<<advice<<endl;
        }while(infile &&advice[0]!='\n');
        infile.close();
    }
    
    return;
}

void giveAdvice(){
    string advice;
    ofstream outfile("hw4pr02input.txt");
    cout<<"Enter your piece of advice.\nPress the Return key twice to mark the end of your advice.\n";
    
    do{
        getline(cin,advice);
        outfile<<advice<<endl;
    }while(cin.peek()!='\n');
    outfile<<'\n';
    outfile.close();
}