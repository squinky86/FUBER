/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char str[256];
	gets(str); //gets deprecated and removed from C11; also unsafe and prone to overflow
	printf("%s.\n", str);
	return EXIT_SUCCESS;
}
