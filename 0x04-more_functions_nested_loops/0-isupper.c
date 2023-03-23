#include "main.h"

/**
 * _isupper - Check if a character is uppe chase
 * @c: Character to be checked
 * Return: 1 if Character is upper or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
