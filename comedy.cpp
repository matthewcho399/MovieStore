// ------------------------------------------------ comedy.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class handles the comedy DVDs.  
// -------------------------------------------------------------------------------------------------------------------- 
#include "comedy.h"
#include <iostream>
using namespace std;

Comedy::Comedy(string titles, int years)
{   
    title = titles;
    releaseYear = years;
}

bool Comedy::operator<(const Movie& movie) const
{
    const Comedy& comedyCast = dynamic_cast<const Comedy&>(movie);
    if (title < comedyCast.title || ((title == comedyCast.title) && (releaseYear > comedyCast.releaseYear)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Comedy::operator==(const Movie& movie) const
{
    const Comedy& comedyCast = dynamic_cast<const Comedy&>(movie); 
    if (title == comedyCast.title && releaseYear == comedyCast.releaseYear)
    {
        return true;
    }
    else
    {
        return false;
    }
}