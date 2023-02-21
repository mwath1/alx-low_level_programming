#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print in order separated by comma followed by space
 * @n: number to begin
 * Return : null
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
