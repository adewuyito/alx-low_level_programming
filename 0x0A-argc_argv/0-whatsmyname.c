#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Prints out its own name
 * @argc: No. of argument
 * @argv: Pointer to array of arguments
 * Return: Success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	exit(EXIT_SUCCESS);
}
