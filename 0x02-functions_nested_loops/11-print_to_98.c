#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers to 98
 * @c: Number to count from
 * Return: Void
 */

void print_to_98(int c)
{
	int user_input = c;

	if (user_input <= 98)
	{
		while (user_input <= 98)
		{
		user_input == 98 ? printf("%d", (user_input)) : printf("%d, ", (user_input));
			user_input++;
		}
		printf("\n");
	}
	else if (user_input >= 98)
	{
		while (user_input >= 98)
		{
		user_input == 98 ? printf("%d", (user_input)) : printf("%d, ", (user_input));
			user_input--;
		}
			printf("\n");
	}
}
