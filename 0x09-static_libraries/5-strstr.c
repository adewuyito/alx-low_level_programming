#include "main.h"
#include <string.h>

/**
 * _strstr - Returns the first occurance of a string
 * @haystack: String to search
 * @needle: String to search for
 * Return: The string ocurance of Null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n_len, h_len;

	h_len = strlen(haystack);
	n_len = strlen(needle);

	if (n_len > h_len)
	{
		return (NULL);
	}

	for (i = 0; i <= h_len - n_len; i++)
	{
		int j;

		for (j = 0; j <= n_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (j == n_len)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
