/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <iostream>
#include <cstdlib>

using namespace std;

void DoNothing(bool *test)
{
	if (*test) //dereference without initialization
		cout << "True!" << endl;
	else
		cout << "False!" << endl;
}

int main(int argc, char *argv[])
{
	bool *c = new bool;
	DoNothing(c);
	delete c;
	return EXIT_SUCCESS;
}
