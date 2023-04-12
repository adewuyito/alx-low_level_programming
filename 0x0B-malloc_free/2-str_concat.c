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

	sum = size1 + size2;
	locate = (char *)malloc((sum - 1) * sizeof(char));
	
	/*Checks*/
	if (s1 == NULL )
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	if (locate == NULL)
	{
		return (NULL);
	}

	/*Iteration Addition*/
	for (i = 0; i < size1; i++)
	{
		locate[i] = s1[i];
	}
	locate[size1] = 32;
	for (i = 0; i <= size2; i++)
	{
		locate[size1 + i] = s2[i];
	}

	return (locate);
}
