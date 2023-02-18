#include <stdio.h>
/**
 * main - Alphabet followed by new line
 * Return: 0
 */
int main(void)
{
	char v;

	v = 'a';
	for (v = 'a'; v <= 'z'; v++)
	{
		if (v != 'e' && v != 'q')
			putchar(v);
	}
	putchar('\n');
	return (0);
}
