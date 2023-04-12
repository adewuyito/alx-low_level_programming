#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatinates two strigns together
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *locate;
	size_t size1;
	size_t size2;
	size_t i;
	size_t sum;

	/*Length calculation*/
	size1 = strlen(s1);
	size2 = strlen(s2);

	/*check*/
	if (s1 == NULL )
	{
		size1 = 1;
	}
	if (s2 == NULL)
	{
		size2 = 1;
	}

	sum = size1 + size2;
	locate = (char *)malloc((sum) * sizeof(char));

	/*Malloc check*/
	if (locate == NULL)
	{
		return (NULL);
	}

	/*Iteration Addition*/
	for (i = 0; i < size1; i++)
	{
		locate[i] = s1[i];
	}
	locate[sum] = 32;
	for (i = 0; i <= size2; i++)
	{
		locate[size1 + i] = s2[i];
	}

	return (locate);
}
