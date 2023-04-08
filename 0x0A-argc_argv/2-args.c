#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Main entry point
 * @argc: No. of input arguments
 * @argv: Array of input arguments
 *
 * Return: Exit Successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
