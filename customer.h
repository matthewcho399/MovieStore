// ------------------------------------------------ customer.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class handles each customer and the transactions that come with them.
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include "transaction.h"
#include <iostream> 
#include <string> 
#include <vector> 
#include <stack>
using namespace std;

class Transaction;

class Customer
{
public: 
    Customer();
    Customer(int, string, string);
    ~Customer() {};

    int getID() const;
    string getFirstName() const;
    string getLastName() const;
    void setCustomer(int, string, string);
    void display();
    void printHistory();
    void addTrans(Transaction*);    

private:
    int id;
    string firstName, lastName;
    stack<Transaction*> transactions; 
};
#endif