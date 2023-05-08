#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The num of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *          w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
