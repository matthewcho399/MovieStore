// ------------------------------------------------ drama.cpp --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class handles the drama DVDs. 
// -------------------------------------------------------------------------------------------------------------------- 
#include "drama.h"
#include <iostream>
using namespace std;

Drama::Drama(string titles, int years)
{
    title = titles;
    releaseYear = years;
}

bool Drama::operator<(const Movie& movie) const
{
    const Drama& dramaCast = dynamic_cast<const Drama&>(movie);
    if (title < dramaCast.title || ((title == dramaCast.title) && (releaseYear > dramaCast.releaseYear)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Drama::operator==(const Movie& movie) const
{
    const Drama& dramaCast = dynamic_cast<const Drama&>(movie); 
    if (title == dramaCast.title && releaseYear == dramaCast.releaseYear)
    {
        return true;
    }
    else
    {
        return false;
    }
}