#include "main.h"
/**
 * string_nconcat - concatinates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: allocated space
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n > k)
		l = i + k;
	else
		l = i + n;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0'
	return (str);
}

