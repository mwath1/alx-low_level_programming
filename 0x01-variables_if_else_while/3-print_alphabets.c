#include <stdio.h>
/**
 * main - Lowercase followed by upper alphabet
 * Return: 0
 */
int main(void)
{
	char n;
	char c;

	n = 'a';
	c = 'A';
	while
		(n <= 'z') {
			putchar(n);
			n++;
		}
	while
		(c <= 'Z')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
