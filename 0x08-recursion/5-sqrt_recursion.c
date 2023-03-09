#include "main.h"

/**
 * _sqrt_recursion - find square root of value
 * @m: value to be square rooted
 * @i: root to be tested
 * Return: root of value n
 */

int actual_sqrt_recursion(int m, int i);
/**
 * actual_sqrt_recursion - function defination
 * @n: value to be rooted
 * Return: square root
 */
int _sqrt_recursion(int n);
/**
 * _sqrt_recursion - function defination
 * @n: value to be rooted
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (actual_sqrt_recursion(m, 0));
}

/**
 * actual_sqrt_recursion - recurs to find natural square root
 * @m: value to be rooted
 * @i: iterator
 * Return: square root
 */

int actual_sqrt_recursion(int m, int i)
{
	if (i * i > m)
		return (-1);
	if (i * i == m)
		return (i);
	return (actual_sqrt_recursion(m, i + 1));
}
