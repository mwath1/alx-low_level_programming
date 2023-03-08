#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: value to b checked
 * Return: 1 if integer is prime number , else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively ckecks for prime number
 * @n: integer to be ckecked
 * @i: iteration
 * Return: i if n is prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_pime(n, i - 1));
}
