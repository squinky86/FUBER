/*
 * Copyright © 2021, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[])
{
	bool *newBool = new bool();
	shared_ptr<bool> test1 (newBool);

	cout << "1: " << *test1 << endl;

	delete newBool;
	return 0;
}
