#include "main.h"

/**
 * error_handler - Function handles errors within the program.
 * @message: Error message to be printed.
 * @exit_code: Program exit code when an error occurs.
*/

void error_handler(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * file_copy - Function copies file
 * @src_filename: Source text file to be copied.
 * @dest_filename: Destination text file copied to.
 *
 * Return: 0 is success.
*/

int file_copy(const char *src_filename, const char *dest_filename)
{
	int src_fp, dest_fp;
	ssize_t bytes_read, bytes_write;
	char buffer[BUFFER_SIZE];

	src_fp = open(src_filename, O_RDONLY);
	if (src_fp == -1)
	{
		error_handler("Error: Can't read from source file", 98);
	}

	dest_fp = open(dest_filename, O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (dest_fp == -1)
	{
		error_handler("Error: Can't write to destination file", 99);
	}

	while ((bytes_read = read(src_fp, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_write = write(dest_fp, buffer, bytes_read);
		if (bytes_write != bytes_read)
		{
			error_handler("Error: Can't write to destination file", 99);
		}
	}

	if (bytes_read == -1)
	{
		error_handler("Error: Can't read from source file", 98);
	}

	if (close(src_fp) == -1 || close(dest_fp) == -1)
	{
		error_handler("Error: Can't close a file descriptor", 100);
	}

	return (0);
}

/**
 * main - Function writes to a file
 * @argv: Array pointer of characters.
 * @argc: No. of arguments being passed.
 * * Return: 0 is success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_handler("Usage: cp file_from file_to", 97);
	}

	file_copy(argv[1], argv[2]);

	return (0);
}}
