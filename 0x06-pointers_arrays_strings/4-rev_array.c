#include "main.h"

/**
 * reverse_array - Reverses the element index of an array
 * @a: Pointer to the array
 * @n: Number of elements in a
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int *start, *end, temp;

	start = a;
	end = a + n - 1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
