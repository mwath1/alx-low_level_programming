#include "main.h"
#include <string.h>
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;
	unsigned int i, sum = 0;
	char *p;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			p = argv[n];
			for (i = 0; i < strlen(p); i++)
			{
				if (p[i] < 48 || p[i] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(p);
			p++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
