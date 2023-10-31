#include "main.h"

/**
 * append_text_to_file - Function appends text to the end
 * of a text file.
 * @filename: Pointer variable to the actual text file.
 * @text_content: Pointer variable to the contents of the file
 *
 * Return: 1 if successful, otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_write = write(fp, text_content, strlen(text_content));

		if (bytes_write < 0)
		{
			close(fp);
			return (-1);
		}
	}

	close(fp);

	return (1);
}
