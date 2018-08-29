/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	bool *c = new bool;
	if (*c == true) //dereference without initialization
		cout << "Got here!" << endl;
	delete c;
	return 0;
}
