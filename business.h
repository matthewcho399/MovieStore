// ------------------------------------------------ business.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This program reads in the files for the business. 
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef BUSINESS_H_
#define BUSINESS_H_
#include "movie.h"
#include "transaction.h"
#include "customer.h"
#include "bstree.h"
#include "hashtable.h"
#include <iostream> 
#include <iomanip>
#include <sstream>
#include <fstream> 
#include <string> 

class HashTable;

class Business
{
public: 
    Business();
    ~Business();

    void buildMovies(ifstream&);
    void buildCustomers(ifstream&);
    void processTrans(ifstream&);
    void printInventory();

private: 
    BSTree* classicTree; 
    BSTree* comedyTree; 
    BSTree* dramaTree;
    BSTree* movieTree;
    HashTable* customerTable;
};
#endif