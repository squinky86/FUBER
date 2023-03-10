/*
 * Copyright © 2023, Jon Hood www.hoodsecurity.com
 * License: ISC
 */

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

void sayHello() { //unused correct function
	std::cout << "Hello, World!\n"; 
} 

void sayНello() { //homoglyphic function
	std::cout << "Goodbye, World!\n"; 
} 

int main(int argc, char *argv[])
{
	sayНello(); 
	return EXIT_SUCCESS;
}
