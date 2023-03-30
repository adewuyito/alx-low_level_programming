#include "main.h"

/**
 * _strncat - concatinates a string with another
 * @dest: first string to join too
 * @src: string to coppy
 * @n: index to search
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	count = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
