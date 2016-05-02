//
//  main.cpp
//  Lesson11-694-1
//
//  Created by Yushen on 4/27/16.
//  Copyright © 2016 yushen. All rights reserved.
//


//Member functions push_back, capacity, size, reserve, and resize that behave the same as the member functions of the same names for vectors.

#include <iostream>
#include <vector>
using namespace std;

//VectorDouble Function Declarations
class VectorDouble
{
    private:
  		int max_count;
  		int count;
    double *Elements;
  		void expandCapacity();
    
    
    public:
  		
  		VectorDouble();
  		VectorDouble(int SIZE);
  		VectorDouble(const VectorDouble &vector);
  		~VectorDouble();
  		void push_back(double Value);
        double value_at(int i)const;
        void change_value_at(double d, int i);
        int size() const;
        int capacity() const;
        void reserve(int);
        void resize(int);
        friend ostream& operator<<(ostream &outs, const VectorDouble& vector);
        friend bool operator==(const VectorDouble& vector1, const VectorDouble& vector2);
        void operator=(const VectorDouble& vector1);
  		

};

int main()
{
    VectorDouble vector(5);
    
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);
    
    
    cout<<"testing member functions: "<<endl;
    cout<<endl;
    cout << "capacity of the VectorDouble: " << vector.capacity() << endl;
    cout << "Size of the VectorDouble : " << vector.size() << endl;
    
    for(int index = 0; index < vector.size(); index++)
    //Modified see first version for changes
    
    cout << "value_at(" << index <<"): "<< vector.value_at(index) << endl;
    cout<<endl;
    cout << "Call to change_value_at() index: "<< endl;
    vector.change_value_at(99,2);
    
    cout << "Now, value at index 2: "<< vector.value_at(2) << endl;
    
    vector.push_back(32);
    cout << "Size of the VectorDouble after resize: " << vector.size() << endl;
    cout << "copy constructor" << endl;
    
    VectorDouble temp(5);
    
    temp.push_back(50);
    temp.push_back(33);
    temp.push_back(33);
    
    VectorDouble copyConstructor(temp);
    cout << copyConstructor;
    cout<<endl;
    
    cout << "equality operator(==) checking on vecor==temp" << endl;
    
    if(vector == temp){
        cout << "both vectors are equal" << endl;
    }
    else{
        cout << "vectors are not equal" << endl;
        cout << "Assignment operator(=)checking vector = temp" << endl;
    }
    
    vector = temp;
    
    cout << vector;
    cout<<endl;
    cout << "checking resize() function " << endl;
    
    vector.resize(3);
    cout  << "size of the new vector: " << vector.capacity() << endl;
    cout << vector;
    cout<<endl;
    
    cout << "checking reserve() function " << endl;
    vector.reserve(40);
    
    cout << "reserve new memory using reserve function " << endl;
    cout<<"Thus, we get the size of the new vector "<< vector.capacity() << endl;
    
    cout << vector;
        cout<<endl;
        cout<<endl;
        
     
    
    return 0;
}


//VectorDouble Class Function Definitions

VectorDouble::VectorDouble()
{
    
    Elements = new double[max_count];
    count = 0;
}

VectorDouble::VectorDouble(int SIZE)
{
    max_count = SIZE;
    Elements = new double[max_count];
    count = 0;
}

VectorDouble::VectorDouble(const VectorDouble &vector)
{
    double *tempelements = new double[vector.count];
    
    count = vector.size();
    for(int i = 0; i < vector.size(); i++)
        
        tempelements[i] = vector.value_at(i);
    Elements = tempelements;
}

VectorDouble::~VectorDouble()
{
    delete [] Elements;
}



void VectorDouble::push_back(double Value)
{
    
    if(count == max_count)
        expandCapacity();
    
    Elements[count] = Value;
    count++;
}

int VectorDouble::capacity() const
{
    return max_count;
}

int VectorDouble::size() const
{
    return count;
}

void VectorDouble::reserve(int size)
{
    max_count = size;
    double *newElement = new double[max_count];
    for (int i = 0; i < count; i++)
        newElement[i] = Elements[i];
    delete [] Elements;
    Elements = newElement;
}

void VectorDouble::expandCapacity()
{
    max_count = 2 * max_count;
    double *newElement = new double[max_count];
    for(int i = 0; i < count; i++)
        newElement[i] = Elements[i];
    delete[] Elements;
    Elements = newElement;
}

void VectorDouble::resize(int size)
{
    if(size >0)
    {
        max_count = size;
        double *newElement = new double[max_count];
        for(int i=0;i<count;i++)
            newElement[i] = Elements[i];
        delete[]Elements;
        Elements = newElement;
    }
}

double VectorDouble::value_at(int i ) const
{
    if(i < 0 || i > count)
    {
        return 0;
    }
    else
    {
        return Elements[i];
    }
}

void VectorDouble::change_value_at(double d, int index)
{
    Elements[index] =d;
}

ostream& operator<<(ostream& outs, const VectorDouble& vector)
{
    for(int i = 0; i < vector.count; i++)
        outs << vector.Elements[i] << endl;
    return outs;
}

void VectorDouble::operator =(const VectorDouble &vector)
{
    
    double *temp = new double[vector.count];
    for(int i = 0; i < vector.size(); i++)
        temp[i] = vector.value_at(i);
  		
    count = vector.size();
    Elements = temp;
}

bool operator ==(const VectorDouble &vector1, const VectorDouble &vector2)
{
    bool equal = true;
    if(vector1.size() != vector2.size())
        equal = false;
    else
    {
        for(int i = 0; i < vector1.size(); i++)
            if(vector1.value_at(i) != vector2.value_at(i))
                equal = false;
    }
    return equal;
}







