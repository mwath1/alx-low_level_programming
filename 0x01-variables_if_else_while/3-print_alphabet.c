#include <stdio.h>
/**
 * main - Alphabet in lowercase then upper
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'a'; n = 'z'; n++)
		putchar(n);
	for (n = 'A'; n = 'Z'; n++)
		putchar(n);
	putchar('\n');
	getchar ();
}
