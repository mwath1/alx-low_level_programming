#include "main.h"

/**
 * _islower - check for lowercase letters
 *@c: test character
 * Return: 1 if c ic lowercase, o if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
