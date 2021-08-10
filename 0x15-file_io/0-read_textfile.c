#include "main.h"
/**read_textfile - function that reads a text file and
 *		  prints it to the POSIX standard output
 *@filename: pointer to name of file
 *@letters: is the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 *	  or 0 if filename is NULL, file can not be open or
 *	  read and if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(size_t) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	rd = read(fd, buffer, letters);

	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, fd);

	if (wr == -1)
		return (0);

	close(fd);
	free(buffer);

	return (wr);
}
