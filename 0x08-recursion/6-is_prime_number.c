#include "main.h"

/**
 * prime_no - function declaration
 * @num: value for test
 * @num2: the divisor
 * Return: 1 if prime number,otherwise 0
 */

int prime_no(int num, int num2);

/**
 * is_prime_number - function defination
 * @n: value to test
 * Return: 1 if prime number,otherwise 0
 */

int is_prime_number(int n);

/**
 * prime_no - check if no is prime or not
 * @num: value for test
 * @num2: the divisor
 * Return: 1 if prime number,otherwise 0
 */

int prime_no(int num, int num2)
{
	if (num % num2 == 0)
	{
		return (0);
	}
	else if (num2 == num / 2)
	{
		return (1);
	}
	else
	{
		return (prime_no(num, num2 + 1));
	}
}

/**
 * is_prime_number - check for prime number
 * @n: value to test
 * Return: 1 if prime number,otherwise 0
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}
	else
	{
		return (prime_no(n, divisor));
	}
}
