#include "main.h"

/**
 * swap_int - swaps two integers
 * @a:integer 1 addrss
 * @b:integer 2 address
 * Retyrn: 0
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
