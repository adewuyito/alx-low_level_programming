#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: String to copy too
 * @src: String to copy from
 * @n: Number of elements to copy
 * Return: Copied String
 */

char *_strncpy(char *dest, char *src, int n)
{
	char* ret = dest;

	while (n && (*dest++ = *src++))
	{
		n--;
	}

	if (n)
	{
		while (--n)
		{
			*dest++ = '\0';
		}
	}

	return (ret);
}
