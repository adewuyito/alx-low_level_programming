#include <main.c>

/**
 * string_toupper - changes a string to all upper
 * @n: String to change
 * Return: The string @n
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
		i++;
	}

	return (n);
}
