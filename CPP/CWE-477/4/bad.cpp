/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <cstdlib>
#include <iostream>
#include <locale>
#include <string>
#include <codecvt>

using namespace std;

int main(int argc, char *argv[])
{
	string utf8 = u8"Π";
	wstring_convert<codecvt_utf8<char16_t>, char16_t> utf16conv; //deprecated in C++17
	u16string str = utf16conv.from_bytes(utf8);
	for (char16_t c : str)
		cout << hex << showbase << c << endl;
	return EXIT_SUCCESS;
}
