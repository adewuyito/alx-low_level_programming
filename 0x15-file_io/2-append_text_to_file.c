#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append to
 * @text_content: string to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "a");
	if (fp != NULL)
	{
		if (text_content == NULL)
		{
			fclose(fp);
			return (1);
		}

		if (fputs(text_content, fp) < 0)
		{
			fclose(fp);
			return (-1);
		}

		fclose(fp);
		return (1);
	}
	else
	{
		return (-1);
	}
}
