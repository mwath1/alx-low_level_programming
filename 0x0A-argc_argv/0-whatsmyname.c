#include "main.h"

/**
 * main - print name of program
 * @argc: no. of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[]);
	return (0);
}
