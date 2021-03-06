/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[])
{
	//take control of an uninitialized pointer
	shared_ptr<int> test1 (new int);

	//dereference uninitialized pointer
	cout << "1: " << *test1 << endl;
	return 0;
}
