#include "main.h"

/**
 * _sqrt_recursion - find square root of value
 * @m: value to be square rooted
 * @i: root to be tested
 * Return: root of value n
 */

int actual_sqrt_recursion(int m, int i);
/**
 * _sqrt_recursion - function defination
 * @n: value to be rooted
 * Return: square root
 */
int _sqrt_recursion(int n);
/**
 * actual_sqrt_recursion - function defination
 * @m: value to be rooted
 * @i: root to be tested
 * Return: square root
 */

int actual_sqrt_recursion(int m, int i)
{
	if ((i * i) == m)
	{
		return (i);
	}
	else if (i == m / 2)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(m, i + 1));
	}
}

/**
 * _sqrt_recursion - recurs to find natural square root
 * @n: value to return square
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (actual_sqrt_recursion(n, root));
	}
}
