#include <stdio.h>
/**
 * main - Use putchar twice to print all digit numbers to base 10
 *
 * Return: 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
			putchar(num + '0');
			num++;
		}
	putchar('\n');
	return (0);
}
