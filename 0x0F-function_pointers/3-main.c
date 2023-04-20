#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main entry point
 * @argc: number of arguments
 * @argv: pointer to list of arguments
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *run;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	run = argv[2];
	if (get_op_func(run) == NULL || run[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((b == 0 && *run == '/') || (b == 0 && *run == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(run)(a, b));

	exit(EXIT_SUCCESS);
}
