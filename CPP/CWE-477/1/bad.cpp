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
	ostrstream str; //deprecated by C++98
	str << 1 << ends;
	return EXIT_SUCCESS;
}
