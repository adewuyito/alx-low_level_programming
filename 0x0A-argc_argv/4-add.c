#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

int sum_args(char *str);
/**
 * main - Entry point
 * @argc: No. of input argument
 * @argv: Pointer to array of input argument
 *
 * Return: Exit
 */
int main(int argc, char *argv[])
{

	int count;
	int str_to_int;
	int sum;

	sum = 0;
	count = 1;
	while (count < argc)
	{
		if (sum_args(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * sum_args - Sum int values in argv
 * @str: No. of input argument
 *
 *  Return: sum
 */
int sum_args(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
