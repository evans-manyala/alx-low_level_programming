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
	int fp;
	ssize_t bytes_read, bytes_write;
	char *buffer;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	bytes_read = read(fp, buffer, letters);
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	close(fp);

	free(buffer);

	printf("Bytes written: %lu\n", bytes_write);

	return (bytes_read);
}
