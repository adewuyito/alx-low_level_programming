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

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
