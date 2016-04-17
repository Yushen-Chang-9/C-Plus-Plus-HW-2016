//
//  List.cpp
//  Lesson9-699-8
//
//  Created by Yushen on 4/16/16.
//  Copyright © 2016 yushen. All rights reserved.
//

#include "List.h"

using namespace std;


NumberList::NumberList(): array_size(0)
{
    //ctor
}
int NumberList::get_array_size() const
{
    return array_size;
}
void NumberList::add_Number(double number)
{
    if (full())
    {
        cout<<"Error: adding to a full list.";
        exit(1);
    }
    else
    {
        array_list[array_size] = number;
        array_size = array_size+1;
    }
}
double NumberList:: get_Number(int position) const
{
    if((position>= array_size) || (position <0))
    {
        cout<<"Error:"<<" reading to an empty list position.\n";
        exit(1);
    }
    else
    {
        return (array_list[position]);
    }
}
void NumberList::delete_Last_Number()
{
    array_size = array_size-1;
    
}
bool NumberList::full() const
{
    return (array_size == MAX_LIST_SIZE);
}
ostream& operator <<(ostream& outs, const NumberList& the_object)
{
    for(int i=0; i<the_object.array_size; i++)
        
        outs<<the_object.array_list[i]<<endl;
    return outs;
}

NumberList::~NumberList()
{
    //Blank
}