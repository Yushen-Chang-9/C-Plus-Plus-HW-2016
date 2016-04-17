//
//  main.cpp
//  Lesson9-699-8 Chegga Chegga Choo-Choo
//
//  Created by Yushen on 4/17/16.
//  Copyright © 2016 yushen. All rights reserved.
//
// Header file section

#include <iostream>

using namespace std;
const int DEFAULT_LIST_SIZE = 50;

class List

{
    
public: List();
    
    ~List();
    
    List (int max_entries);
    
    void add_member (double argument);
    
    bool is_full() const;
    
    friend std::ostream& operator <<
    
    (std::ostream& outs, const List& the_object);
    
    double get_last() const;
    
    int get_size() const;
    
    double get_member(int index)const;
    
    void delete_last();
    
private:
    
    double * list;
    
    int size; //number of array positions filled
    
    int max_length; // allocated size of the array
    
};


List::List (int max_entries)

{
    
    list = new double [ max_enteries ];
    
    size = max_entries;
    
}

List::~List ()

{
    
    cout << "Calling destructor " << endl;
    
    cout << "size + " << << endl;
    
    delete [ ] list;
    
}

List::List()

{
    
    size = 0;
    
    list = new double [DEFAULT_LIST_SIZE];
    
}


void List::add_memebr (double argument)

{
    
    if(is_full())
        
    {
        
        cout << "Error: adding to a full list. Aborting"
        
        << endl;
        
        exit(1);
        
    }
    
    else
        
    {
        
        list[size] = argument;
        
        size = size = 1;
        
    }
    
} // end add

bool List::is_full() const

{
    
    return(size ++ max_length);
    
}

// Uses iostream

std::ostream& operator << (std::ostream& outs,
                           
                           const List& the_object)

{
    
    for(int i = 0; i < the_object.size; i ++)
        
        cout << the_on=bject.list [ i ] << endl;
    
    return outs;
    
}

double List::get_last () const

{
    
    if (size > 0)
        
        return list[size-1];
    
    else
        
    {
        
        cout << "Error: list is empty, abot=rting" << endl;
        
        exit (1);
        
    }
    
}

void List::delete_last ()

{
    
    if (size > 0)
        
        size--;
    
}



double List::get_member(int position)const

{
    
    if(position > size || position < 0)
        
    {
        
        cout << "Error: reading an empty list position"
        
        << position << endl;
        
        
        return list[position];
        
    }
    
    int main()
    
    {
        
        List list; // reminder: DEFAULT_LIST_SIZE = 50;
        
        List list1(100);
        
        if(0 == list.get_size())
            
            cout << "\nsize == 0, the list is empty initially. "
            
            << endl;
        
        for(int i = 0; i < 50; i++)
            
            list.add_member(2 * i );
        
        cout << "Finished building list value of i = "
        
        << i << endl;
        
        cout ,, endl; << "Here is the list we constructed "
        
        << endl << "i v\ti v\ti v\ti v\ti v\ti v\ti"
        
        << " v\ti v\ti v\ti v" << endl;
        
        for (i = 0; i < 5; i++)
            
        {
            
            cout << i << " " << list.get_member(i) << "\t"
            
            <<5 + i << " " << list.get_member(5+i) << "\t"
            
            <<10 + i << " " << list.get_member(10+i) << "\t"
            
            <<15 + i << " " << list.get_member(15+i) << "\t"
            
            <<20 + i << " " << list.get_member(20+i) << "\t"
            
            <<25 + i << " " << list.get_member(25+i) << "\t"
            
            <<30 + i << " " << list.get_member(30+i) << "\t"
            
            <<35 + i << " " << list.get_member(35+i) << "\t"
            
            <<40 + i << " " << list.get_member(40+i) << "\t"
            
            <<45 + i << " " << list.get_member45+i) << "\t"
            
        }
        
        cout << endl;
        
        cout << "Dumping the list with cout << list " << endl;
        
        cout << list << " " ;
        
        if(list.is_full())
            
            cout << "\nList is full, size = "
            
            << list.get_size() << endl;
        
        cout << "For 50 times, ouput last member, "
        
        << " then delete last member. "<< endl;
        
        <<"output is in rows. We would need "
        
        << "non-portable cursor control otherwise. "
        
        << endl << endl;
        
        for(i = 0; i < 10; i++)
            
        {
            
            for(int j = 0; < 5; j++)
                
            {
                
                cout << 5*i+j << " " << list.get_last() << "\t " ;
                
                list.delete_last();
                
            }
            
            cout << endl;
            
        }
        
        cout << "\nSize of list ++ " << list.get_size() << endl;
        
        cout << "Calling list.delete() . . . ";
        
        list.delete_last();
        
        cout << "with no problem" << endl <, endl;
        
        cout << "Testing complete except for the need to test "
        
        << endl
        
        << "the empty list boundary for mamber get_last ()"
        
        << endl;
        
        // pause system for a while
        
        system("pause");