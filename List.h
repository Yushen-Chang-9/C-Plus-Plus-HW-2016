//
//  List.hpp
//  Lesson9-699-8
//
//  Created by Yushen on 4/16/16.
//  Copyright © 2016 yushen. All rights reserved.
//

#ifndef List_h
#define List_h
#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

const int MAX_LIST_SIZE = 50;
class NumberList
{
public:
    NumberList();
    int get_array_size() const;
    void add_Number(double number);
    double get_Number(int position) const;
    void delete_Last_Number();
    bool full() const;
    friend ostream& operator <<(ostream& outs, const NumberList& the_object);
    virtual ~NumberList();
    
private:
    double array_list[MAX_LIST_SIZE];
    int array_size;
};

#endif /* List_hpp */
