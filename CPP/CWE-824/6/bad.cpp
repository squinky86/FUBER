/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <iostream>
#include <map>
#include <utility>
#include <memory>

using namespace std;

map<string, bool> mymap;

void DoNothing(bool test)
{
	if (test) //dereference without initialization
		cout << "True." << endl;
	else
		cout << "False." << endl;
}

int main(int argc, char *argv[])
{
	mymap.insert(make_pair("test", shared_ptr<bool>(new bool)));
	DoNothing(mymap.find("test")->second);
	return 0;
}
