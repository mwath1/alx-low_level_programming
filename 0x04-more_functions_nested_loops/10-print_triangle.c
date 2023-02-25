#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b++)
			{
			_putchar(35);
			}
			for (c = 0; b == a; c++)
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
