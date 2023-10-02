#include "main.h"
/**
 * read_textfile - print txt
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: something
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, r, w;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
		return (0);
	free(buffer);
	close(fd);
	return (w);
}
