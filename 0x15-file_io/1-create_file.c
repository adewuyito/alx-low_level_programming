#include "main.h"


/**
 * create_file - creates a file and writes text_content to it
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t length;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "w+");
	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);
		if (fwrite(text_content, sizeof(char), length, fp) != length)
		{
			fclose(fp);
			return (-1);
		}
	}

	fclose(fp);
	return (1);
}
