#include "main.h"

/**
 * swap_int - swaps two int
 * @a: first int to swap
 * @b: second int to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
