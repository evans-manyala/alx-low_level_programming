#include "main.h"

/**
 * create_file - Function creates a file
 * @filename: Pointer variable for the filename.
 * @text_content: - Pointer variable for the contents
 * of the filename created.
 *
 * Return: File if successful, otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes_write;

	if (filename ==  NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fp == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	bytes_write = write(fp, text_content, strlen(text_content));

	if (bytes_write < 0)
	{
		close(fp);
		return (-1);
	}

	close(fp);

	return (1);
}
