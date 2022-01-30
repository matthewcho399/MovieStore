// ------------------------------------------------ drama.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class handles the drama DVDs.
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef DRAMA_H_
#define DRAMA_H_
#include "movie.h"
#include <iostream>
using namespace std;

class Drama : public Movie
{
public:
    Drama() {};
    Drama(string, int);
    virtual ~Drama() {};    

    virtual bool operator<(const Movie&) const;
    virtual bool operator==(const Movie&) const;

};
#endif