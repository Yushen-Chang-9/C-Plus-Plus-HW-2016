//
//  main.cpp
//  Lesson5-617-11
//
//  Created by Yushen Chang on 3/6/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//


// Header files
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Movie class declaration
class Movie
{
public:
    
    
    Movie();
    Movie(string newMovieName, string newMPAARating);
    Movie(string movieName1, string MPAARating1, int terrible1, int bad1, int ok1, int good1, int great1);
    string getMovieName();
    void setMovieName(string newMovieName);
    string getMPAARating();
    void setMPAARating(string newMPAARating);
    void addRating(int rate);
    double getAverage();
    
private:
    string movieName;
    string MPAARating;
    int terrible;
    int bad;
    int ok;
    int good;
    int great;
};


// start main method
int main()
{
    // create three Movie objects
    Movie movie1("Bob The Builder","R");
    Movie movie2("A Boring Movie", "PG-13");
    Movie movie3("Bobloblaw The Movie", "PG");
    // set the movie name to movie1
    
    
    
    // set the MPAA rating to movie1
    movie1.setMPAARating("R");
    
    // add ratings for movie1
    movie1.addRating(5);
    movie1.addRating(4);
    movie1.addRating(5);
    movie1.addRating(3);
    movie1.addRating(4);
    
    
    // add ratings for movie2
    movie2.addRating(5);
    movie2.addRating(1);
    movie2.addRating(4);
    movie2.addRating(5);
    movie2.addRating(3);
    
    
    // add ratings for movie3
    movie3.addRating(4);
    movie3.addRating(5);
    movie3.addRating(2);
    movie3.addRating(3);
    movie3.addRating(5);
    
    
    // display the movie1 details
    cout << "Movie1 details:" << endl;
    cout << "Movie Name: " << movie1.getMovieName() << endl;
    cout << "MPAA Rating: " << movie1.getMPAARating() << endl;
    cout << "People Rating: " << movie1.getAverage() << endl << endl;
    
    // display the movie2 details
    cout << "Movie2 details:" << endl;
    cout << "Movie Name: " << movie2.getMovieName() << endl;
    cout << "MPAA Rating: " << movie2.getMPAARating() << endl;
    cout << "People Rating: " << movie2.getAverage() << endl << endl;
    
    // display the movie3 details
    cout << "Movie3 details:" << endl;
    cout << "Movie Name: " << movie3.getMovieName() << endl;
    cout << "MPAA Rating: " << movie3.getMPAARating() << endl;
    cout << "People Rating: " << movie3.getAverage() << endl << endl;
    
    return 0;
}

// Movie class implementation
Movie::Movie()
{
    movieName = "";
    MPAARating = "";
    terrible = 0;
    bad = 0;
    ok = 0;
    good = 0;
    great = 0;
}

Movie::Movie(string newMovieName, string newMPAARating)
{
    movieName = newMovieName;
    MPAARating = newMPAARating;
    terrible = 0;
    bad = 0;
    ok = 0;
    good = 0;
    great = 0;
}

Movie::Movie(string movieName1, string MPAARating1, int terrible1, int bad1, int ok1, int good1, int great1)
{
    movieName = movieName1;
    MPAARating = MPAARating1;
    terrible = terrible1;
    bad = bad1;
    ok = ok1;
    good = good1;
    great = great1;
}

string Movie::getMovieName()
{
    return movieName;
}

void Movie::setMovieName(string newMovieName)
{
    movieName = newMovieName;
}

string Movie::getMPAARating()
{
    return MPAARating;
}

void Movie::setMPAARating(string newMPAARating)
{
    MPAARating = newMPAARating;
}

void Movie::addRating(int rate)
{
    switch(rate)
    {
        case 1:
            terrible++;
            break;
        case 2:
            bad++;
            break;
        case 3:
            ok++;
            break;
        case 4:
            good++;
            break;
        case 5:
            great++;
            break;
    }
}

double Movie::getAverage()
{
    return (double) (terrible * 1 + bad * 2 + ok * 3 + good * 4 + great * 5) / (terrible + bad + ok + good + great);
}

