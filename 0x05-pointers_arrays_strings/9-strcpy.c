#include "main.h"

/**
 * _strcpy - copies a pointer to  buffer
 * @dest: the buffer destination
 * @src: the string to copy
 * Return: dest
 */



char *_strcpy(char *dest, char *src)
{
	char *p;

	p = dest;
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
