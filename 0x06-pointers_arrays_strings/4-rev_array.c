#include "main.h"

/**
 * reverse_array - Reverses the element index of an array
 * @a: Pointer to the array
 * @n: Number of elements in a
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, count, j;
	int res[n];

	j = 0;
	count = n;
	for (i = 0; i < n; i++)
	{
		res[i] = a[i];
	}

	while (count--)
	{
		a[j] = res[count];
		j++;
	}
}
