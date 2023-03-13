#include "main.h"

/**
 * create_array - create array of chars,
 * initialize with specific char
 * @size: no of bytes to be allocated
 * @c: char to initialize
 * Return: a poiter to array ,else null
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
