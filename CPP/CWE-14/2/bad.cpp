/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	string password = "MyPass";
	if (password.compare("MyPass") == 0)
		cout << "Password accepted." << endl;
	password.replace(password.begin(), password.end(), "\0"); //dead store
	return EXIT_SUCCESS;
}
