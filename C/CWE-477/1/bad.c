/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdatomic.h>

int main(int argc, char *argv[])
{
	atomic_int i = ATOMIC_VAR_INIT(1); //ATOMIC_VAR_INIT deprecated by C17 standard
	printf("%d.\n", i);
	return EXIT_SUCCESS;
}
