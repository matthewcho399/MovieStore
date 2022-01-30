// ------------------------------------------------ movie.cpp --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class is the parent class to the three movie types. 
// -------------------------------------------------------------------------------------------------------------------- 
#include "movie.h"
#include <iostream>
using namespace std;

Movie::Movie()
{
    stock = 0;
    director = " ";
    title = " ";
    releaseYear = 0;
}

int Movie::getStock()
{
    return stock; 
}

int Movie::getYear()
{
    return releaseYear;
}

string Movie::getTitle()
{
    return title;
}

void Movie::display()
{
    cout << stock << " " << director << " " <<
    title << " " << releaseYear << endl;
}

void Movie::increaseStock()
{
    stock++;
}

bool Movie::decreaseStock()
{
    if (stock <= 0)
    {
        return false;
    }
    else
    {
        stock--;
        return true;
    }
}