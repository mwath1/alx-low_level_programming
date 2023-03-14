#include "main.h"

/**
 * alloc_grid - returns pointer to 2 dimensional array of integer
 * @width: width of matrix
 * @height: height of matrix
 * Return: NULL if negative or 0
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int n, p;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		array[n] = (int *)malloc(sizeof(int) * width);
		if (array[n] == NULL)
		{
			free(array);
			for (p = 0; p <= n; p++)
				free(array[p]);
			return (NULL);
		}
	}
}
