// ------------------------------------------------ classic.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class handles the classic DVDs.  
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef CLASSIC_H_
#define CLASSIC_H_
#include "movie.h"
#include <iostream>
using namespace std;

class Classic : public Movie
{
public:
    Classic() {};
    Classic(string, int);

    virtual bool operator<(const Movie&) const;
    virtual bool operator==(const Movie&) const;
    
private:
    string majorActor;
    int month;
};
#endif