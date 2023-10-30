#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int agrc, char *argv[])
{
	int i;

	for (i = 0 ; i < agrc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
