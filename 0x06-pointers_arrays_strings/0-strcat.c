#include "main.h"

/**
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, count;

	count = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; src[i] != '\0'; i++;)
	{
		dest[count] = src[i];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
