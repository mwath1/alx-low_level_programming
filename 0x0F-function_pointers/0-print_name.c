#include "function_pointers.h"
/**
 * print_name - function tha prints name
 * @name: name to print
 * @f: pointer to funtion
 * Return: Null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
