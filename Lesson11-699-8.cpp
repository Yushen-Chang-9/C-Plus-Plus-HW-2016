//
//  main.cpp
//  Chapter 11 Project 2 redo of 9
//
//  Created by Yushen on 4/30/16.
//  Copyright © 2016 yushen. All rights reserved.
//

#include<iostream>
using namespace std;
const int MAX_SIZE = 50;
typedef double* DoublePtr;

//Function Decleration Provided by d2l
class ListDynamic
{
    
    
private:
    double* listValues;
    int size;
    
public:
    
    ListDynamic();
    bool full();
    int getSize();
    void addValue(double value);
    double getValue(int index);
    double getLast();
    void deleteLast();
    friend ostream& operator <<(ostream& out, const ListDynamic& thisList);
    

};
int main()
{
    double value;
    DoublePtr p;
    p = new double [50];
    ListDynamic list;
    cout << "size of List " << list.getSize() << endl;
    
    cout << "enter value to add to list: ";
    cin >> value;
    list.addValue(value);
    cout << "enter value to add to list: ";
    cin >> value;
    list.addValue(value);
    cout << "enter value to add to list: ";
    cin >> value;
    list.addValue(value);
    cout << "enter value to add to list: ";
    cin >> value;
    list.addValue(value);
    cout << "enter value to add to list: ";
    cin >> value;
    list.addValue(value);
    cout << "New size of List " << list.getSize() << endl;
    cout << "First Value: " << list.getValue(0) << endl;
    cout << "Last Value: " << list.getLast() << endl;
    cout << "deleting last value from list" << endl;
    list.deleteLast();
    cout << "new list size "  << list.getSize() << endl;
    cout << "the list now contains: " << endl << list << endl;
    delete [] p;
    
    return 0;
}



//Function Definition Provided by file uploaded onto d2l
ListDynamic::ListDynamic()
{
    size = 0;
}

bool ListDynamic::full()
{
    return (size == MAX_SIZE);
}

int ListDynamic::getSize()
{
    return size;
}



void ListDynamic::addValue(double value)
{
    if (full())
    {
        double* temp = new double[size];
        std::copy(listValues, listValues + size, temp);
        
        delete[] listValues;
        listValues = new double[size + 1];
        
        std::copy(temp, temp + size, listValues);
        listValues[size] = value;
        delete[] temp;
    } else
    {
        listValues[size++] = value;
    }
}
double ListDynamic::getValue(int index)
{
    if (index < size)
    {
        //blank
    }
    else
    {
        cout << "\n\n*** Error in List Class: Attempting to retrieve value past current size.";
    }
    
    return listValues[index];
}
double ListDynamic::getLast()
{
    if (size > 0)
    {
    //blank
        
    }
    else
    {
        cout << "\n\n*** Error in List Class: Call to getLast in Empty List.";
    }
    return getValue(size - 1);
}

void ListDynamic::deleteLast()
{
    if (size > 0)
        size--;
    else
        cout << "\n\n*** Error in List Class: Call to deleteLast in Empty List.";
}
ostream& operator <<(ostream& out, const ListDynamic& thisList)
{
    for (int i = 0; i < thisList.size; i++)
        out << thisList.listValues[i] << endl;
    return out;
}