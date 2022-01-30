// ------------------------------------------------- return.h ---------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class performs the return transaction.
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef RETURN_H_
#define RETURN_H_
#include "transaction.h"
#include <iostream> 
using namespace std;

class Return : public Transaction
{
public: 
    Return() {};
    ~Return() {};

    virtual void doTrans(BSTree&, char);
    //virtual void setData(string, char);
};
#endif