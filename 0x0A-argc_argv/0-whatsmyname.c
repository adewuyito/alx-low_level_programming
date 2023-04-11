#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Prints out its own name
 * @argc: No. of argument
 * @argv: Pointer to array of arguments
 * Return: Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
