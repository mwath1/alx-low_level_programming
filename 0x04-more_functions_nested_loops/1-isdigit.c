#include "main.h"

/**
 * _isdigit - print digit 0 to 9
 * @c: ASCII character to check and print
 * Return: 1 if c is digit , 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}

