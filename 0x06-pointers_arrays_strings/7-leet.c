#include "main.h"
/**
 * leet - ecodes a string
 * @n: input string
 *
 * Return: n
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i =; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if(n[i] == s1)
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
