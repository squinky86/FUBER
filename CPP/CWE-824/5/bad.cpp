/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <iostream>

using namespace std;

void DoNothing(bool *test)
{
	if (*test) //dereferenced without initialization here
		cout << "True." << endl;
	else
		cout << "False." << endl;
}

int main(int argc, char *argv[])
{
	bool *c;
	DoNothing(c);
	return 0;
}
