#include "main.h"

/**
 * puts_half - print hlf a string
 * @str: srting to be halved
 * Return half of str
 */

void puts_half(char *str)
{
	int i, k, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	k = (len / 2);
	if ((len % 2) == 1)
		k = ((len + 1) / 2);
	for (i = k; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
