#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file and print to STDOUT.
 * @filename: textfile to be read
 * @letters: number of letters to read and print
 * Return: w- actual number of letters to read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w_byte;
	ssize_t r_byte;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r_byte = read(fd, buffer, letters);
	w_byte = write(STDOUT_FILENO, buffer, r_byte);

	free(buffer);
	close(fd);
	return (w_byte);
}
