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
	vector<double> v = {0, 1, 2};
	vector<double> r(v.size());
	transform(v.begin(), v.end(), r.begin(), bind1st(multiplies<double>(), M_PI)); //bind1st deprecated in C++11, removed in C++17
	for (size_t i = 0; i != r.size(); i++)
		cout << r[i] << endl;
	return EXIT_SUCCESS;
}
