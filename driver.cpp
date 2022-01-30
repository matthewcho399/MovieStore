#include "business.h"
#include <iostream> 
using namespace std;

int main()
{
    ifstream infile1("data4movies.txt");
	if (!infile1) {
		cout << "File could not be opened." << endl;
		return 1;
	}
	ifstream infile2("data4commands.txt");
	if (!infile2) {
		cout << "File could not be opened." << endl;
		return 1;
	}

	ifstream infile3("data4customers.txt");
	if (!infile3) {
		cout << "File could not be opened." << endl;
		return 1;
	}

    Business business;
    business.buildMovies(infile1);
    business.processTrans(infile2);
    business.buildCustomers(infile3);

    infile1.close();
	infile2.close();
	infile3.close();

    return 0;
}