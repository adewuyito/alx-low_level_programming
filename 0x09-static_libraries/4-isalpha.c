#include "main.h"

/**
 * _isalpha - Check for alpha char
 * @c: The char to be cheched
 * Return: 1 for alpha or 0 on any other thing
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
