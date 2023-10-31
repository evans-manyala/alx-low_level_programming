#include "main.h"

/**
 * main - Function writes to a file
 * @argv: Array pointer of characters.
 * @argc: No. of arguments being passed.
 * Return: 0 is success.
 *
 */

int main(int argc, char *argv[])
{
	int fp_from, fp_to;
	ssize_t bytes_read, bytes_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = open(argv[1], O_RDONLY);
	if (fp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fp_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_write = write(fp_to, buffer, bytes_read);
		if (bytes_write != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fp_from) == -1 || close(fp_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				(close(fp_from) == -1) ? fp_from : fp_to);
		exit(100);
	}
	return (0);
}
