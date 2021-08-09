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
	ssize_t op, rd, wr;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);

	return (wr);
}
