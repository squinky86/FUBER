/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	bool *c = new bool;
	if (*c == true) //dereference uninitialized pointer
		cout << "Got here!" << endl;
	delete c;
	return EXIT_SUCCESS;
}
