#include "main.h"

/**
 * _puts_recursion - function prints a string
 * @s: parameter 1
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
