// ------------------------------------------------- transaction.cpp ---------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This class is the parent class to the four transactions. 
// -------------------------------------------------------------------------------------------------------------------- 
#include "transaction.h"

Transaction::Transaction()
{
    title = " ";
    releaseYear = 0;
    type = ' ';
}

void Transaction::doTrans(BSTree& tree, char type)
{
    
}

/*
void Transaction::setData(string data, char type)
{

}
*/

string Transaction::getTitle()
{
    return title;
}

int Transaction::getYear()
{
    return releaseYear;
}

char Transaction::getType()
{
    return type;
}
