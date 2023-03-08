#include  "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	while (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
