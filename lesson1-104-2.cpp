//
//  main.cpp
//  lesson1-104-2
//
//  Created by Yushen Chang on 1/30/16.
//  Copyright (c) 2016 frcc. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n, count(100);
    double answer_n, guess, r;
    
    
    cout << "This program will compute the square root\n";
    cout << "of a number using the Babylonian algorithm.\n";
    cout << "Please enter a whole number and press the return key:\n";
    cin >> n;
    cout << "Please enter a 'guess' number to divide by:\n";
    cin >> guess;
    
    r = n/guess;
    guess = (guess + r)/2;
    
    while (count > 0)
    {
        r = n/guess;
        guess = (guess + r)/2;
        
        if (guess <= (guess * 0.01) + guess)
            answer_n = guess;
        else
            r = n/guess;
        guess = (guess + r)/2;
        
        count-=1;
    }
    
    
    
    cout << "The sqaure root of "<< n << " is " << answer_n << endl;
    cout << endl;
    
    
    return 0;
    
}
