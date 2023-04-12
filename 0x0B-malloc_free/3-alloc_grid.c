#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that gives a pointer to a 2d array
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: The pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		/*Allocate memory for each row and initialize to 0*/
		array[i] = (int *)malloc(width * sizeof(int));
		if (array == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(array[j]);
			}

			free(array);
		}

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
