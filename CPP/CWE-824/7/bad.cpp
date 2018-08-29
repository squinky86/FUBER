/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	bool *c;
	if (*c == true) //dereference uninitialized pointer
		cout << "Got here!" << endl;
	return EXIT_SUCCESS;
}
