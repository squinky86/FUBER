/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <cstdlib>
#include <iostream>
//Work in progress: finalize with GCC 8 and move from experimental
#include <experimental/filesystem>

using namespace std;

int main(int argc, char *argv[])
{
	string myPath;
	cout << "Enter the name of a directory: ";
	cin >> myPath;
	experimental::filesystem::path myPath2(myPath);
	if (!experimental::filesystem::exists(myPath2))
	{
		cout << "Creating " << myPath2 << endl;
		experimental::filesystem::create_directory(myPath2);
	}

	return EXIT_SUCCESS;
}
