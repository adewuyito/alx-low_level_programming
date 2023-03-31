#include "mian.h"

/**
 * _strncpy - copies a string
 * @dest: String to copy too
 * @src: String to copy from
 * @n: Number of elements to copy
 * Return: Copied String
 */

char *_strncpy(char *dest, const char *src, int n)
{
	char *ret;

	*ret = dest;
	while (n && (*dest++ = *src++))
	{
		n--;
	}

	while (n--)
	{
		*dest++ = '\0';
	}

	return (ret);
}
