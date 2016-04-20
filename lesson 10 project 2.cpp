/* Section CSC 160 Comp Sci I : C++
** Name:
** Student ID:
** File name: Lesson9-5-431.cpp
** Last Updated :

** Array program that reads a file and counts the occurances of the numbers in the array and sorts them.

*/
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void check_input(ifstream& iPut);
void set_array(ifstream& iPut, vector <int>& test);
void sort_vector(vector <int>& test);
void check_repeats(vector <int>& test);
//do this using vectors
int main()
{
    ifstream iPut;
    vector <int> test;

    cout << "Homework 9: Solution to Chapter 7 Project 5" << endl;
    cout << "\n";

    iPut.open("hw10input.txt");

    check_input(iPut);

    set_array(iPut, test);

    sort_vector(test);

    check_repeats(test);

    iPut.close();

    system ("Pause");
    return 0;
}

void check_input(ifstream& iPut)
{
    if(iPut.fail())
    {
        cout << "Input file opening failed. \n";
        exit(1);
    }
}

void set_array(ifstream& iPut, vector <int>& test)
{
    int numbers;
    while (iPut>>numbers)
    {
         test.push_back(numbers);
    }

    sort_vector(test); // Call to selecting sort to sort array before output.

}

void sort_vector(vector <int>& test) // Decending selection sort borrowed from a java program from CSC 116
{
    int pos, mini, i;

    for (vector<int>::size_type pos = 0; pos < test.size(); ++pos )
    {
        vector<int>::size_type mini = pos;

        for ( vector<int>::size_type i = pos + 1; i < test.size(); ++i )
        {
            if ( test[i] < test[mini] ) mini = i;
        }

        if ( mini != pos )
        {
            swap( test[mini], test[pos] );
        }
    }

}

void check_repeats(vector <int>& test)
{
    for(int i = 0; i < test.size(); i++)
    {
        int count = 0;
        int flag = 1;
        for ( int j = 0; j < i; j++) // First pass through array
        {
            if (test[i] == test[j])
            flag += 1;
        }
            if ( flag == 1 ) // Flag to do a second pass
            {
                for(int k = 0; k < test.size(); k++)
                {
                    if (test[i] == test[k])
                    count += 1;
                }

                cout << test[i] << " " << count <<endl;
            }
      }
}