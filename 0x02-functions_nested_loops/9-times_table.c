#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	for (int i = 1; i <= 10; i++)
	{
		printf("9 x %d = %d\n", i, 9 * i);
	}
}

int main(void)
{
	times_table();
	return (0);
}
