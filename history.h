// ------------------------------------------------ history.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class shows a list of DVD transactions of a customer  in  chronological  order  
// (latest  to  earliest)  and  specify  whether  the  movie  was borrowed or returned. 
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef HISTORY_H_
#define HISTORY_H_
#include "transaction.h"
using namespace std;

class History : public Transaction 
{
public: 
    History() {};
    ~History() {};

    virtual void doTrans(BSTree&, char);
    //virtual void setData(string, char);

private: 

};
#endif