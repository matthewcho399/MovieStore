// ------------------------------------------------ business.cpp --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This program reads in the files for the business. 
// -------------------------------------------------------------------------------------------------------------------- 
#include "business.h"

Business::Business()
{
    classicTree = new BSTree();
    comedyTree = new BSTree();
    dramaTree = new BSTree();
    customerTable = new HashTable();
}

Business::~Business()
{
    classicTree->makeEmpty();
    delete classicTree;
    comedyTree->makeEmpty();
    delete comedyTree;
    dramaTree->makeEmpty();
    delete dramaTree;
    customerTable->emptyTable();
    delete customerTable;
}

void Business::buildMovies(ifstream& infile)
{
    char type = ' ';
    string line;
    infile >> type;
    while (!infile.eof()) 
    {
		Movie* movie = NULL;
		getline(infile, line);
		switch (type) 
        {
		case 'F':
			movie = new Comedy();
			comedyTree->insert(movie);
			break;
		case 'D':
			movie = new Drama();
			dramaTree->insert(movie);
			break;
		case 'C':
			movie = new Classic();
			classicTree->insert(movie);
			break;
		default:
			cout << "Invalid Movie Type: " << type << endl;
			break;
		}
		infile >> type;
	}
    
}

void Business::buildCustomers(ifstream& infile)
{
    int id; 
    string first, last, temp;
    infile >> id;
    while (!infile.eof())
    {
        infile >> first; 
        infile >> last;
        getline(infile, temp);
        Customer* customer = new Customer(id, first, last);
        customerTable->insert(id, customer);
        infile >> id;
    }
}

void Business::processTrans(ifstream& infile)
{
    Transaction* transPtr;
    string line; 
    char type; 

    while (!infile.eof())
    {
        infile >> type;
        switch (type)
        {
            case 'B':
            case 'R':
            case 'H':
            case 'I':
                getline(infile, line);
                transPtr->doTrans(*movieTree, type);
                delete transPtr;
                transPtr = NULL;
                break;
            default: 
                getline(infile, line);
                cout << "error" << endl;
                break;
        }
    }
    delete transPtr;
    transPtr = NULL;
}

void Business::printInventory()
{
    cout << "Movie Inventory: " << endl;
    cout << "Comedy Movies: " << endl;
    comedyTree->inorder();
    cout << "Drama Movies: " << endl;
    dramaTree->inorder();
    cout << "Classic Movies: " << endl;
    classicTree->inorder();
    cout << endl;
}