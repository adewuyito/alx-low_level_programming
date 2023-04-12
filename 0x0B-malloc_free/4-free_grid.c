#include <stdlib.h>

/**
 * free_grid - frees the memory for a 2d array
 * @grid: the aray to free
 * @height: The siae[height] of the array
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int  i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]); /*Free memory for each row*/
	}
	free(grid);
}
