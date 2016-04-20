#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <algorithm>
//two strings X
//1st name X
//2nd name X
//converts both to lowercase X
//create new string Pig Latin, first letter Cap in first and last name
//PIG LATIN: IF first letter is a consonant, move first letter to the end of name and add "ay" to the end
//IF the first letter is a vowel, add "way" to the end.

using namespace std;
void get_names();
void transformPigLatin(string &word);
int main()
{
    string first_name, last_name, full_name;
    cout<<"This program will translate your given name into Pig Latin"<<endl;
    cout<<"Please enter your first name: ";
    getline(cin, first_name);
    cout<<"And your last name: ";
    getline(cin, last_name);

        for(unsigned int i = 0; i < first_name.length(); ++i)
        {
            first_name[i] = tolower(first_name[i]);
        }
        for(unsigned int i = 0; i < last_name.length(); ++i)
        {
            last_name[i] = tolower(last_name[i]);
        }
    transformPigLatin(first_name);
    transformPigLatin(last_name);

    full_name = first_name+" "+last_name;
    cout<<"Your name in Pig Latin is "<<full_name<<endl;


    system ("Pause");
    return 0;
}
void transformPigLatin(string &word)//get it to cap the first letter of first and last name
{
    if (word.empty()) return;

    char ch = word[0];
    //if ((ch < 'A') || (ch > 'Z')) return;

    if (std::string("aeiou").find(ch) != std::string::npos)
    {
        word += "way";
    }
    else
    {
        if (word.length() > 1)
        {
             word.erase(0, 1);
             word.append(&ch, 1);
        }
        word += "ay";
    }
    word[0] = toupper(word[0]);
}

