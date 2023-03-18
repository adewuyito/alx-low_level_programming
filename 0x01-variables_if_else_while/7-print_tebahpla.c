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

	n = 'z';
	while (n != 'a' - 1)
	{
		putchar(n);
		--n;
	}
	putchar('\n');

	return (0);
}
