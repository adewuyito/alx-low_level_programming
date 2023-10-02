#include "main.h"

/**
 * main - copies the contents of one file to another
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 1 on success, -1 on failure
 */
int main(int ac, char **av)
{
	FILE *src, *dest, *files[2];
	char *buf;
	size_t length;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = fopen(av[1], "r");
	dest = fopen(av[2], "w+");

	files[0] = src;
	files[1] = dest;
	if (src == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL || dest == NULL)
	{
		free(buf);
		closeFiles(files, 2);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((length = fread(buf, sizeof(char), 1024, src)) > 0)
	{
		if (fwrite(buf, sizeof(char), length, dest) != length)
		{
			closeFiles(files, 2);
			free(buf);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	free(buf);
	closeFiles(files, 2);
	return (0);
}

/**
 * closeFiles - close a list of files
 * @av: The list of files
 * @amount: The length of the list
 */
void closeFiles(FILE *av[], int amount)
{
	int i, status;

	for (i = 0; i < amount; i++)
	{
		if (av[i] != NULL)
		{
			status = fclose(av[i]);
			if (status != 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", status);
				exit(100);
			}
		}
	}
}
