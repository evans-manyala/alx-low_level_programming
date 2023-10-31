#include "main.h"
/**
 * read_textfile - Function reads a files and prints it to stdout
 * @filename: Pointer to the file to be read.
 * @letters: Characters holdup information
 * Return: Amount of data read and printed to stdout, otherwise 0
 * if the file is empty.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters * sizeof(char));
	char *c = malloc(letters * sizeof(char));
	ssize_t bytes_read;
	FILE *fp;

	if (filename == NULL)
	{
		free(c);
		free(buffer);
		return (0);
	}

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		free(c);
		free(buffer);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, fp);
	fclose(fp);

	if (bytes_read < 0)
	{
		free(c);
		free(buffer);
		return (0);
	}

	fwrite(buffer, 1, bytes_read, stdout);
	free(c);
	free(buffer);
	return (bytes_read);
}
