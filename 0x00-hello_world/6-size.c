#include <stdio.h>

/**
 * main - prints size of various types
 *
 * Return: 0 when successful
 */

int main(void)
{
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu bytes(s)", sizeof(int));
	printf("Size of a long int: %lu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
