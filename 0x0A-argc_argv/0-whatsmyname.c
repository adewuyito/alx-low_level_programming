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
	int i;

	i = 0;
	for (; argv[0][i] != '\0'; i++)
	{
		printf("%c", argv[0][i]);
	}
	printf("\n");
	(void)argc;
	exit(EXIT_SUCCESS);
}
