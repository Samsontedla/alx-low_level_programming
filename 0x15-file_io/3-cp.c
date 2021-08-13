#include "main.h"
char *create_buffer(char *file);
void close_file(char fd);
/**
 *create_buffer - function that allocates a buffer
 *@file: pointer to file
 *Return: allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 *close_file - function that closes an opened file
 *@fd: file discriptor
 *Return: nothing
 */
void close_file(char fd)
{
	int c;

	c = close(fd);

	if (c < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 *main - function that copies contents of file given from argv[1] to argv[2]
 *@argc: argument count
 *@argv: pointer to argument vectors
 *Return: 0 in success
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);

	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (rd == -1 || from == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(to, buffer, rd);

		if (wr == -1 || to == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
