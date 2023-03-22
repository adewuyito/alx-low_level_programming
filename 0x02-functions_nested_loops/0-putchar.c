#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int ptintPut();

int main(void)
{
	printPut();
	
	return (0);
}


int printPut(void)
{
	int i;
        char string[8] = "\_putchar";

        for (i = 0; i <= 8; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
