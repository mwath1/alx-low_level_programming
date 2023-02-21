#include "main.h"

/**
 * _islower - check for lowercase letters
 *
 * Retur: 1 if c ic lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
