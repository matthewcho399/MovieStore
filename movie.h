// ------------------------------------------------ movie.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class is the parent class to the three movie types. 
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef MOVIE_H_
#define MOVIE_H_
#include <iostream>
using namespace std;

class Movie
{
public:
    Movie();
    virtual ~Movie() {};

    virtual bool operator<(const Movie& rhs) const = 0;
    virtual bool operator==(const Movie& rhs) const = 0;

    virtual int getStock(); 
    virtual int getYear();
    virtual string getTitle();
    //virtual void setData();
    virtual void display();
    virtual void increaseStock();
    virtual bool decreaseStock();
    

protected:
    int stock;
    string director;
    string title;
    int releaseYear; 
};
#endif