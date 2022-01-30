// ------------------------------------------------ hashtable.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class implements a hashtable for the customers.
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef HASHTABLE_H_
#define HASHTABLE_H_
#include "customer.h"
using namespace std;

class Customer;

const int size = 1001;

class HashTable
{
public: 
    HashTable();
    ~HashTable();

    //void buildTable(int);
    void emptyTable();
    bool insert(int, Customer*);
    Customer* find(int);
    
private:
    struct HashNode
    {
        int key;
        Customer* data;
    };

    HashNode* customers = NULL;
};
#endif