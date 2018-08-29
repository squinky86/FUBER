/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	intptr_t ptr;
	if (ptr == EOF) //dereference uninitialized pointer
		printf("At the end of a non-existent file.");
	return 0;
}
