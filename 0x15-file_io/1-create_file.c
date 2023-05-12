#include "main.h"

/**
 * create_file - function will Creates a file.
 * @filen: A pointer to the name of the file that wewill create.
 * @text_con: A pointer to the string that write to the file created.
 *
 * Return: If it fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filen, char *text_con)
{
	int fid, wr, ln = 0;

	if (filen == NULL)
		return (-1);

	if (text_con != NULL)
	{
		for (ln = 0; text_con[ln];)
			ln++;
	}

	fid = open(filen, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fid, text_con, ln);

	if (fid == -1 || w == -1)
		return (-1);

	close(fid);

	return (1);
}
