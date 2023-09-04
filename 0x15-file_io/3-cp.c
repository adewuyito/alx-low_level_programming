#include "main.h"

/**
 * main - copies the contents of one file to another
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 1 on success, -1 on failure
 */
int main(int ac, char **av)
{
	FILE *src, *dest;
	char *buf;
	size_t length;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = fopen(av[1], "r");
	if (src == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	dest = fopen(av[2], "w+");
	if (dest == NULL)
		exit(99);

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		fclose(src);
		fclose(dest);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((length = fread(buf, sizeof(char), 1024, src)) > 0)
	{
		if (fwrite(buf, sizeof(char), length, dest) != length)
		{
			fclose(src);
			fclose(dest);
			free(buf);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	free(buf);
	fclose(src);
	fclose(dest);

	return (0);
}
