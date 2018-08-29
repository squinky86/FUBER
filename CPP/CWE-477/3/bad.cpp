/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <cstdlib>
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[])
{
	auto_ptr<int> p(new int); //auto_ptr deprecated by C++11 and removed in C++17
	*p.get() = 1;

	cout << *p << endl;

	return EXIT_SUCCESS;
}
