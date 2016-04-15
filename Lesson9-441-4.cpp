//
//  main.cpp
//  Lesson9-441-4
//
//  Created by Yushen on 4/8/16.
//  Copyright © 2016 yushen. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
using namespace std;
//Function Declarations
void fill_array(int a[], int number_of_scores, int& number_used);
double compute_average( const int a[], int number_used);
double compute_deviation (const int a[], int number_used);
void display_information( const int a[], int number_used);
const int MAX_NUMBER_SCORES = 10;

int main() //Start of Main
{
    char choice;
    do//Start of Do-While
    {
    int score[MAX_NUMBER_SCORES], number_used;
    cout <<"Calculating the average of these scores & the standard deviation"<< endl;
    cout<<"Test scores: "<<endl;
    
    
    fill_array(score, MAX_NUMBER_SCORES, number_used);
    display_information(score, number_used);
        cout<<"press 'y' or 'Y' to repeat. otherwise hit any key to exit."<<endl;
        cin>>choice;
        
    }//End of Do-While
    while(choice=='y' || choice=='Y');
    
    return 0;
}//End of Main

//Function Defintions
void fill_array(int a[], int number_of_scores, int& number_used)
{
    cout<<"please enter up to 10 test positive test scores"<<endl;
    cout<<"Mark the end of the list with a negative number.(like -1 or somthing)"<<endl;
    cout<<"Seriously, Don't forget to enter a NEGATIVE number to mark end of list"<<endl;
    cout<<"Also the inputs are seperated by white spaces"<<endl;
    int next, index = 0;
    cin>> next;
 
    
    while((next>=0)&&(index<MAX_NUMBER_SCORES))
    {
        a[index] = next;
        index++;
        cin>> next;
    }
    number_used = index;
}
double compute_average( const int a[], int number_used)
{
    double total = 0;
    for(int index = 0; index < number_used; index++)
    {
        total = total + a[index];
    }
    if(number_used>0)
    {
        return(total/number_used);
    }
    else
    {
        cout<<"The Program has encountered in error."<<endl;
        return 0;
    }
}

double compute_deviation (const int a[], int number_used)
{
    double deviation, average = compute_average(a, number_used);
    double sum2=0;
    
    for ( int i = 0; i <=number_used-1; i++ )
    {
        
        sum2 += pow((a[i]-average),2);
    }
    
    deviation= sqrt(sum2/(number_used));
    return deviation;
}
void display_information(const int a[], int number_used)
{
    double average = compute_average(a, number_used), deviation = compute_deviation(a, number_used);
    
    cout<<"The average "<<number_used <<" scores is: "<< average<<endl;
    cout<<"The standard deviation is: "<<deviation<<endl;
    
}
