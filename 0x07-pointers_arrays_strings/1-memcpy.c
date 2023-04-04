#include "main.h"

/**
 * _memcpy - Copies data from one location to the leader
 * @dest: Secondery storge locoja
 * @src: The present posirtion on C
 * @n: No of bytes to copy
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_cpy;
	unsigned int i;

	dest_cpy = dest;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	return (dest_cpy);
}
