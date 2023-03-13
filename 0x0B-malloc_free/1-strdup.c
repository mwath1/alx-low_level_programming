#include "main.h"
/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: duplicated string
 * Return: pointer tp duplicated string,else NULL
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	whilen((dup[i] = str[i]) != '\0')
		i++;
	return (dup);
}
