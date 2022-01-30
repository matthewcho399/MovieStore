// ------------------------------------------------ comedy.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class handles the comedy DVDs.  
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef COMEDY_H_
#define COMEDY_H_
#include "movie.h"
#include <iostream>
using namespace std;

class Comedy : public Movie
{
public:
    Comedy() {};
    Comedy(string, int);
    virtual ~Comedy() {};   

    virtual bool operator<(const Movie&) const;
    virtual bool operator==(const Movie&) const;

};

#endif