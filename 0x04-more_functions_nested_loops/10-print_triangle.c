#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints # as a triangles to the terminal
 * @size: Number or times the line would print
 * Return: Void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
}
