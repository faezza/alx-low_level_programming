#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
