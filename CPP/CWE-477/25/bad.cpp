/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
	vector<string> v = {"one", "two", "three"};
	transform(v.begin(), v.end(), ostream_iterator<size_t>(cout, " "), std::mem_fun_ref(&string::size)); //mem_fun_ref is deprecated; prints size of each word in v
	return EXIT_SUCCESS;
}
