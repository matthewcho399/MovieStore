#include "moviefactory.h"

Movie* MovieFactory::createMovie(string input)
{
    Movie* movie = NULL;
    switch (input[0])
    {
        case 'F':
            //movie = (Movie*) new Comedy(input);
            break;
        case 'C':
            //movie = (Movie*) new Classic(input);
            break;
        case 'D':
            //movie = (Movie*) new Drama(input);
            break;
        default:
            movie = NULL;
            break;
    }
    return movie;

}