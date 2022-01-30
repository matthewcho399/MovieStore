// ------------------------------------------------- transaction.h ---------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class is the parent class to the four transactions. 
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef TRANSACTION_H_
#define TRANSACTION_H_
#include "bstree.h"
#include "movie.h"
#include "comedy.h"
#include "classic.h"
#include "drama.h"
#include "business.h"
using namespace std;

class Business;

class Transaction
{
public:     
    Transaction();
    virtual ~Transaction() {};
    
    virtual void doTrans(BSTree&, char);
    //virtual void setData(string, char);
    string getTitle();
    int getYear();
    char getType();

protected: 
    string title; 
    int releaseYear;
    char type;
};

#endif