#include "main.h"

/**
 * create_file - function that creats  file.
 * @filename: A pointer to the name of that file we will create.
 * @text_content: A pointer to the string to write in the file.
 *
 * Return: on failure -1.
 *         on success  1.
 */
int create_file(const char *filename, char *text_content)
{
	int fid, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fid = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fid, text_content, len);

	if (fid == -1 || w == -1)
		return (-1);

	close(fid);

	return (1);
}
