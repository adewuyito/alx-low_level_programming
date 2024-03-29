#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @string: The binary value
 * Return: the binary
 */
unsigned int binary_to_uint(const char *string)
{
	unsigned int final = 0;
	int i;

	if (string == NULL)
	{
		return (0);
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		char letter = string[i];

		if (!isdigit(letter))
		{
			return (0);
		}

		final = (final << 1) + (letter - '0');
	}

	return (final);
}
