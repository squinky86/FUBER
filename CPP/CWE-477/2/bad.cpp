/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <cstdlib>
#include <iostream>
#include <strstream>

using namespace std;

int main(int argc, char *argv[])
{
	strstreambuf str; //deprecated by C++98
	strstream str_s;
	str_s << 3.14 << ends;
	return EXIT_SUCCESS;
}
