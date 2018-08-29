/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[])
{
	int a = 1 + 2; //suppose that a is a secure variable
	printf("a = %d\n", a);
	a = 0; //dead store occurs here
	return EXIT_SUCCESS;
}

/* Corrected Function
int main(int argc, char *argv[])
{
	volatile int a = 1 + 2; //suppose that a is a secure variable
	printf("a = %d\n", a);
	a = 0; //dead store occurs here
	return EXIT_SUCCESS;
}
*/
