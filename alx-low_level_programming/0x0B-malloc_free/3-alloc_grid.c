#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: int pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr = (int **) malloc(sizeof(int *) * height);
	int i = 0, j;

	if (arr == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		arr[i] = (int *) malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}

	if (width == 0 || height == 0)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
