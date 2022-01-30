// ------------------------------------------------ customer.cpp --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class handles each customer and the transactions that come with them.
// -------------------------------------------------------------------------------------------------------------------- 
#include "customer.h"

Customer::Customer()
{
    id = 0;
    firstName = " ";
    lastName = " ";
}

Customer::Customer(int id_, string first, string last)
{
    id = id_;
    firstName = first;
    lastName = last;
}

int Customer::getID() const
{
    return id; 
}

string Customer::getFirstName() const
{
    return firstName;
}

string Customer::getLastName() const
{
    return lastName;
}

void Customer::setCustomer(int id_, string first, string last)
{
    id = id_;
    firstName = first;
    lastName = last;
}

void Customer::display() 
{
    cout << "Customer: " << id << " " << lastName << " " << firstName << endl;
    int size = transactions.size();
    if (size == 0)
    {
        cout << "NO TRANSACTIONS" << endl;
    }
    else if (size > 0)
    {
        for (int i = 0; i < size; i++)
        {
           
        }
    }
    cout << endl;
}

void Customer::addTrans(Transaction* trans)
{
    transactions.push(trans);
}

void Customer::printHistory()
{
    if (transactions.empty())

    {
        cout << "Transactions unavailable" << endl;
    }
    else if (!transactions.empty())
    {
        Transaction* transPtr;
        transPtr = transactions.top();
        transactions.pop();
        cout << "Movie: " << transPtr->getTitle() << " " << transPtr->getYear()
		<< "; Transaction type: " << transPtr->getType() << endl;
        printHistory();
        transactions.push(transPtr);
        delete transPtr;
        transPtr = NULL;
    }
}