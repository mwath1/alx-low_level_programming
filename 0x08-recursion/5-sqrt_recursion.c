#include "main.h"

/**
 * _sqrt_recursion - find square root of value
 * @n: value to be square rooted
 * Return: root of value n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurs to find natural square root
 * @n: value to be rooted
 * @i: iterator
 * Return: square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
