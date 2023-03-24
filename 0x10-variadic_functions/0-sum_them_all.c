#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: input
 * @...: accept variable no of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	unsigned int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
