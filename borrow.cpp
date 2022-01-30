// ------------------------------------------------ borrow.cpp --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class performs the borrow transaction. 
// -------------------------------------------------------------------------------------------------------------------- 
#include "borrow.h"
#include "movie.h"

void Borrow::doTrans(BSTree& tree, char type)
{
    Movie* moviePtr;
    bool foundMovie;
    switch(type)
    {
        case 'F':
        {
            Comedy* comedyPtr = new Comedy(title, releaseYear);
            tree.retrieveMovie(*comedyPtr, moviePtr);
            if (comedyPtr->decreaseStock() == false)
            {
                cout << "This movie is out of stock." << endl;
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
            tree.retrieveMovie(*classicPtr, moviePtr);
            if (classicPtr->decreaseStock() == false)
            {
                cout << "This movie is out of stock." << endl;
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
            tree.retrieveMovie(*dramaPtr, moviePtr);
            if (dramaPtr->decreaseStock() == false)
            {
                cout << "This movie is out of stock." << endl;
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
            cout << "Borrow not available." << endl;
            break;
    }
}