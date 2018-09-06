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
	shared_ptr<bool> test1 (new bool);
	//correct way to do this:
	//shared_ptr<bool> test1 = make_shared<bool>();
	//or, more concisely:
	//auto test1 = make_shared<bool>();

	//dereference uninitialized pointer
	cout << "1: " << *test1 << endl;
	return 0;
}
