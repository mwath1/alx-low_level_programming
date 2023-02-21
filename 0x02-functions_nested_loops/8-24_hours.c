#include "main.h"
/**
 * jack_bauer - prints every minute of the day, from 00:00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int n, p;

	for (n = 0; n < 24; n++)
	{
		for (p = 0; p < 60; p++)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(':');
		_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
		_putchar('\n');
	}
	}
}
