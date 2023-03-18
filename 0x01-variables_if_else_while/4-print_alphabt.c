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

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'q' || n == 'e')
		{
			n;
		}
		else
		{
			putchar(n);
		}
	}
	putchar('\n');

	return (0);
}
