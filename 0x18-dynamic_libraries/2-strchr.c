#include "main.h"
#include <stdio.h>

/**
 * _strchr - function locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: void
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
