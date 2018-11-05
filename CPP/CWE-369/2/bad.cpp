/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */

#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

//pick either 0 or 1 at random and return it
int MightBeZero()
{
	random_device r;
	mt19937 mt(r());
	uniform_int_distribution<int> uniform_dist(0, 1);
	return uniform_dist(mt);
}

int main(int argc, char *argv[])
{
	//50% chance that MightBeZero() will return 0
	cout << 1 / MightBeZero() << endl;
	return EXIT_SUCCESS;
}
