#include "main.h"

/**
 * cap_string - capitaliza all words of a string
 * @str: string pointer to be cap
 * Return: str
 */
char *cap_string(char *str)
{
	int g = 0;

	while (str[g])
	{
		while (!(str[g] >= 'a') && (str[g] <= 'z'))
			g++;
		if (str[g - 1] == '' ||
				str[g - 1] == '\t' ||
				str[g - 1] == '\n' ||
				str[g - 1] == ',' ||
				str[g - 1] == ';' ||
				str[g - 1] == '.' ||
				str[g - 1] == '!' ||
				str[g - 1] == '?' ||
				str[g - 1] == '"' ||
				str[g - 1] == '(' ||
				str[g - 1] == ')' ||
				str[g - 1] == '{' ||
				str[g - 1] == '}' ||
				 g == 0)
			str[g] -= 32;
			g++;
	}
	return (str);
}
