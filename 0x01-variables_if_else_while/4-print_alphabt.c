#include <stdio.h>
/**
 * main - Alphabet followed by new line
 * Return: 0
 */
int main(void)
{
	char v;
	char str[2];

	v = 'a';
	while
		(v <= 'z') {
			if (str[v] != 'q' && str[v] != 'e' && v <= 'Z')
				putchar(v);
			v++;
		}
	putchar('\n');
	return (0);
}
