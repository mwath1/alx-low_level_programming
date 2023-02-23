#include "main.h"

/**
 * _isdigit - print digit 0 to 9
 * @c: character to check and print
 * Return: 1 if c is digit , 0 otherwise
 */

int _isdigit(int c)
{
	c = 0;
	c++;
	if (c < 10)
		return (1);
	else
		return (0);
}

