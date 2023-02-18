#include <stdio.h>
/**
 * main - Alphabet followed by new line
 * Return: 0
 */
int main(void)
{
	char v;

	v = 'a';
	while
		(v <= 'z') {
			if ((v != 'q' && v != 'e') && v <= 'Z')
				putchar(v);
			v++;
		}
	putchar('\n');
	return (0);
}
