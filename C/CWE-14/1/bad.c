/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char *argv[])
{
	char pass[] = "MySecret";
	if (strncmp(pass, "MySecret", 8) == 0)
		printf("Password accepted.\n");
	memset(pass, 0, sizeof(pass)); //this memory set is identified as a "dead store" by most optimizing compilers (CWE-14)

	return EXIT_SUCCESS;
}

/* Corrected Function
int main(int argc, char *argv[])
{
	volatile char pass[] = "MySecret";
	if (strncmp((char*)pass, "MySecret", 8) == 0)
		printf("Password accepted.\n");
	memset((char*)pass, 0, sizeof(pass)); //this memory set is identified as a "dead store" by most optimizing compilers (CWE-14)

	return EXIT_SUCCESS;
}
*/
