#include "main.h"

/**
 * puts_half - function prints half of a string
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	j = (count - 1) / 2;
	for (i = j + 1; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
