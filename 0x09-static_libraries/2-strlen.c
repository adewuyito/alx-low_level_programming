#include "main.h"

/**
 * _strlen - Gets the lentg of a string
 * @s: The string to check
 * Return: The lenght of string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
