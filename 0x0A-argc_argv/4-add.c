#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int sum_args(int argc, char *argv[]);
/**
 * main - Entry point
 * @argc: No. of input argument
 * @argv: Pointer to array of input argument
 *
 * Return: Exit
 */
int main(int argc, char *argv[])
{
	int sum;

	sum = sum_args(argc, argv);

	if (argc == 1)
	{
		printf("Error\n");
		break;
	}
	if (sum != 0)
	{
		printf("%d\n", sum);
	}

	return (0);
}

/**
 * sum_args - Sum int values in argv
 * @argc: No. of input argument
 * @argv: Pointer to array of input argument
 *
 *  Return: sum
 */
int sum_args(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		int j;

		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}
			j++;
		}

		sum += atoi(argv[i]);
	}

	return (sum);
}

