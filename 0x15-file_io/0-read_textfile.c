#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function  reads and prints tothe POSIX standard output.
 * @filename: text file that is being read
 * @letters: number of letters that will be read
 * Return: w- actual number of bytes taht are read and will be printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fud;
	ssize_t y;
	ssize_t z;

	fud = open(filename, O_RDONLY);
	if (fud == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	z = read(fud, bf, letters);
	y = write(STDOUT_FILENO, bf, z);

	free(bf);
	close(fud);
	return (y);
}
