#include "main.h"
/**
 * _puts - print string
 * @str: sting
 * Return: string pt
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
