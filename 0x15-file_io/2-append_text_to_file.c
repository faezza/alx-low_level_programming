#include "main.h"

/**
 * append_text_to_file - this function appends the text at the end of a file.
 * @filename: the pointer to the name of the file we work on.
 * @text_content: The string that we add to the end of the file.
 *
 * Return: On failure and when the filename is NULL -1.
 *         When the file does not exist and nopermission to wrote the file -1.
 *         on success and when the file exist - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, ln);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
