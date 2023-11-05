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
	int fp_to, fp_from;
	ssize_t bytes_read, bytes_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (1);
	}

	fp_from = open(argv[1], O_RDONLY);

	if (fp_from == -1)
	{
		perror("open");

		return (1);
	}

	fp_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fp_to == -1)
	{
		perror("open");
		return (1);
	}

	while ((bytes_read = read(fp_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_write = write(fp_to, buffer, bytes_read);
		if (bytes_write != bytes_read)
		{
			perror("write");
			return (1);
		}
	}

	close(fp_from);
	close(fp_to);
	return (0);
}
