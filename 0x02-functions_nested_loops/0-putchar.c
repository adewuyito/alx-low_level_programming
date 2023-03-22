#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int c;
	char string[] = "_putchar";

	for (c = 0; c <= 8; c++)
	{
		_putchar(string[c]);
	}
	_putchar('\n');


	return 0;
}
