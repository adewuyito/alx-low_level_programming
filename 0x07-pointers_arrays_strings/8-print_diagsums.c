#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the diagonal from a 2D array
 * @a: The array pointed to
 * @size: The size of the array
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0, j = 0; i < size; i++, j += size + 1)
	{
		sum1 += *(a + j);
	}

	for (i = 0, j = size - 1; i < size; i++, j += size - 1)
	{
		sum2 += *(a + j);
	}

	printf("%d, %d\n", sum1, sum2);
}
