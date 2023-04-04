#include "main.h"

/**
 * _memset - assign a bit to memory
 * @s: The memory location
 * @b: The Fie to coppy
 * @n: Number of tymes
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *orig_s;
	unsigned int i;

	*orig_s = s;
	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}
	return (orig_s);
}
