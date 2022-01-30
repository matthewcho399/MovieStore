// ------------------------------------------------- borrow.h ---------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class performs the borrow transaction.
// -------------------------------------------------------------------------------------------------------------------- 

#ifndef BORROW_H_
#define BORROW_H_
#include "transaction.h"
#include <iostream> 
using namespace std;

class Borrow : public Transaction
{
public: 
    Borrow() {};
    ~Borrow() {};

    virtual void doTrans(BSTree&, char);
    //virtual void setData(string, char);
};
#endif