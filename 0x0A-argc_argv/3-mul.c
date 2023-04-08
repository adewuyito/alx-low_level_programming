#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: No. of input argument
 * @argv: Pointer to array of input argument
 *
 * Return: Exit
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);

		exit(EXIT_SUCCESS);
	}
	printf("%s\n", "Error");

	exit(EXIT_FAILURE);
}
