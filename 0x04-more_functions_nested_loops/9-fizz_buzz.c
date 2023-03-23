#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, final;

	final = 100;
	for (i = 1; i <= final; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}

	return (0);
}
