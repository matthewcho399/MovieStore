// ------------------------------------------------- return.cpp ---------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class performs the return transaction.
// -------------------------------------------------------------------------------------------------------------------- 
#include "return.h"
#include "movie.h"

void Return::doTrans(BSTree& tree, char type)
{
    Movie* moviePtr;
    bool foundMovie;
    switch(type)
    {
        case 'F':
        {
            Comedy* comedyPtr = new Comedy(title, releaseYear);
            if (tree.retrieveMovie(*comedyPtr, moviePtr))
            {
                moviePtr->increaseStock();
            }
            else if (tree.retrieveMovie(*comedyPtr, moviePtr) == false)
            {
                cout << "This movie does not exist." << endl;
                foundMovie = false;
            }
            delete comedyPtr; 
            comedyPtr = NULL;
            break;
        } 
        case 'C':
        {
            Classic* classicPtr = new Classic(title, releaseYear);
            if (tree.retrieveMovie(*classicPtr, moviePtr))
            {
                moviePtr->increaseStock();
            }
            else if (tree.retrieveMovie(*classicPtr, moviePtr) == false)
            {
                cout << "This movie does not exist." << endl;
                foundMovie = false;
            }
            delete classicPtr; 
            classicPtr = NULL;
            break;
        } 
        case 'D':
        {
            Drama* dramaPtr = new Drama(title, releaseYear);
            if (tree.retrieveMovie(*dramaPtr, moviePtr))
            {
                moviePtr->increaseStock();
            }
            else if (tree.retrieveMovie(*dramaPtr, moviePtr) == false)
            {
                cout << "This movie does not exist." << endl;
                foundMovie = false;
            }
            delete dramaPtr; 
            dramaPtr = NULL;
            break;
        } 
        default :
            cout << "Return not available." << endl;
            break;
    }
}