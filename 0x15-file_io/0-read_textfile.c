#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 if:
 * - the file can not be opened or read,
 * - filename is NULL,
 * - write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buf;
	size_t index = 0;
	int c;
	size_t i;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}

	while ((index < letters) && ((c = fgetc(fp)) != EOF))
	{
		buf[index] = (char)c;
		index++;
	}

	for (i = 0; i < index; i++)
	{
		_putchar(buf[i]);
	}

	free(buf);
	fclose(fp);

	return (index);
}
