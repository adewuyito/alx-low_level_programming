#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - main entry point
*
* Return: Always 0;
*/
int main(int *argc, char *argv[])
{
	int a, b, answer;
	int *run;
	if (argc != 4)
	{
		printf("Error");
		return (98);
	}
	if (argv[2] != "+" || argv[2] != "-" || argv[2] != "*" || argv[2] != "/" || argv[2] != "%")
	{
		printf("Error");
		return (99);
	}
	if (argv[-1] == 0 && argv[2] != "/" || argv[2] != "%")
	{
		printf("Error");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[-1]);

	run = fun
	answer = run(func(a, b));

}
