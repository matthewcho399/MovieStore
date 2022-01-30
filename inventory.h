// ------------------------------------------------ inventory.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class outputs all Comedy movies, then all Dramas, then all Classics.
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef INVENTORY_H_
#define INVENTORY_H_
#include "transaction.h"
#include <iostream> 
using namespace std;

class Inventory : public Transaction
{
public: 
    Inventory() {};
    ~Inventory() {};

    virtual void doTrans(BSTree&, char);
    //virtual void setData(string, char);
};
#endif