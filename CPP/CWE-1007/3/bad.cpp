/*
 * Copyright © 2023, Jon Hood www.hoodsecurity.com
 * License: ISC
 */

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

bool isAdmin()
{
	/* If we are an admin, ⁧ /*/ return true ;
	std::cerr << "You are not an admin." << std::endl;
	return false;
}

int main(int argc, char *argv[])
{
	if (isAdmin())
	{
		std::cout << "You are an admin." << std::endl;
	}
	else
	{
		std::cout << "You are NOT an admin." << std::endl;
	}
	return EXIT_SUCCESS;
}
