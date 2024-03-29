#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 if:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buf;
	size_t index = 0;
	int c;
	size_t i;
	size_t file_len = 0;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	fseek(fp, 0, SEEK_END);
	file_len = ftell(fp);
	rewind(fp);
	if (letters > file_len)
		letters = file_len;
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
		_putchar(buf[i]);
	free(buf);
	fclose(fp);

	return (index);
}
