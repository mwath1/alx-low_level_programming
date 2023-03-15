#include "main.h"
/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv:argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
		printf("Error\n");
	return (1);
}
