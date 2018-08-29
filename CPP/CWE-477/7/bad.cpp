/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <cstdlib>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	int vals[] = {0, 1, 2, 3, 4};
	int l2 = count_if(vals, vals+5, bind2nd(less<int>(), 2)); //bind2nd deprecated in C++11, removed from C++17
	cout << l2 << endl; //number of values less than 2
	return EXIT_SUCCESS;
}
