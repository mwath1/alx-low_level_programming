#include "main.h"
/**
 * _isalpha - function t check for alphabetic characters
 * @c: text character
 * Return: 1 if c is letter lower or upper
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
