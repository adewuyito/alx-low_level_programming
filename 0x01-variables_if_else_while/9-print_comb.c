#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
		{
		putchar(',');
		putchar(' ');
		}
		++n;
	}
	putchar('\n');


	return (0);
}
