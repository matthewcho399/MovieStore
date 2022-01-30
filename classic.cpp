// ------------------------------------------------ classic.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class handles the classic DVDs.  
// -------------------------------------------------------------------------------------------------------------------- 
#include "classic.h"
#include <iostream> 
using namespace std;

Classic::Classic(string titles, int years)
{
    title = titles;
    releaseYear = years;
}

bool Classic::operator<(const Movie& movie) const
{
    const Classic& classicCast = dynamic_cast<const Classic&>(movie);
    if (releaseYear < classicCast.releaseYear)
    {
        return true;
    }
    else if (releaseYear == classicCast.releaseYear)
    {
        if (month < classicCast.month)
        {
            return true;
        }
        else if (month == classicCast.month)
        {
            if (majorActor < classicCast.majorActor)
            {
                return true; 
            }
        }
    }
    else
    {
        return false;
    }
}

bool Classic::operator==(const Movie& movie) const
{
    const Classic& classicCast = dynamic_cast<const Classic&>(movie);
    if (majorActor == classicCast.majorActor && month == classicCast.month && releaseYear == classicCast.releaseYear)
    {
        return true;
    }
    else
    {
        return false;
    }
}