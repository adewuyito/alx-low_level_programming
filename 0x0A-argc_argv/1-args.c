#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Programs main function
 * @argc: No. of parameter
 * @argv: Pointers to parameter
 * Return: Success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
