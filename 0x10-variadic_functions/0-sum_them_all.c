#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: input
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	int i, s, sum = 0;

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, int);
	sum += s;
	}
	va_end(args);
	return (sum);
}
