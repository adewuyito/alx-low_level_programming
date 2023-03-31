#include "main.h"

/**
 * _strcmp - Comparies the string two string
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: 0 if s1 and s2 are equal or Negative or Positive if s1 is less than s2 or s2 is greater than s1
 */




int _strcmp(char *s1, char *s2)
{
	int res;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	res = *(unsigned char *)s1 - *(unsigned char *)s2;

	return res;
}
