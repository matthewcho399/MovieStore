#ifndef MOVIEFACTORY_H_
#define MOVIEFACTORY_H_
#include "movie.h"
#include "classic.h"
#include "comedy.h"
#include "drama.h"
#include <iostream> 
#include <fstream> 
#include <sstream>
#include <string> 
using namespace std;

class MovieFactory
{
public: 
    MovieFactory() {};
    
    static Movie* createMovie(string);
};
#endif