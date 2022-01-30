// ------------------------------------------------ hashtable.cpp --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class implements a hashtable for the customers.
// -------------------------------------------------------------------------------------------------------------------- 
#include "hashtable.h"

HashTable::HashTable()
{
    customers = new HashNode[size];
    for (int i = 0; i < size; i++)
    {
        customers[i].key = 0;
        customers[i].data = NULL;
    }
}

HashTable::~HashTable()
{
    emptyTable();
    delete[] customers;
}

void HashTable::emptyTable()
{
    for (int i = 0; i < size; i++)
    {
        customers[i].key = 0;
        if (customers[i].data != NULL)
        {
            delete customers[i].data;
            customers[i].data = NULL;
        }
    }
}

/*
void HashTable::buildTable(int)
{
    customers = new HashNode[size];
    for (int i = 0; i < size; i++)
    {
        customers[i].key = 0;
        customers[i].data = NULL;
    }
}
*/

bool HashTable::insert(int key, Customer* customerPtr)
{
    int hash = key % size;
    if (customers[hash].key == 0)
    {
        customers[hash].key = customerPtr->getID();
        customers[hash].data = customerPtr;
    }
    else
    {
        while (customers[hash].key != 0)
        {
            hash = (hash + 1) % size;
            customers[hash].key = customerPtr->getID();
            customers[hash].data = customerPtr;
        }
    }
}

Customer* HashTable::find(int key_)
{
    int hash = key_ % size;
    if (customers[hash].key == key_)
    {
        return customers[hash].data;
    }
    else 
    {
        while (customers[hash].key != key_)
        {
            hash = (hash + 1) % size;
            if (customers[hash].key == key_)
            {
                return customers[hash].data;
            }
            if (customers[hash].key == 0)
            {
                break;
            }
            return NULL;
        }
    }
}