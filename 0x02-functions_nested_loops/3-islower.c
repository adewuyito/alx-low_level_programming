#include "main.h"

/**
 * _islower - check for lower charaachters
 *@c: Integer to lowwer
 * Return: 1 for lower char or 0 anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
