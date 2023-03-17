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

	n = 'a';
	while (n != 'z')
	{
		putchar(n);
		++n;
	}

	return (0);
}
