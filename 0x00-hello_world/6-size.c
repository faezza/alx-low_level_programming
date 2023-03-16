#include <stdio.h>

/**
 * main - this function is amazing
 *
 * Return: 0 when successfull
 */
int main(void)
{
	puts("size of a char: %lu byte(s)", sizeof(char));
	puts("size of int: %lu byte(s)", sizeof(int));
	puts("size of a long int: %lu byte(s)", sizeof(long int));
	puts("size of a long long int: %lu byte(s)", sizeof(long long int));
	puts("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
