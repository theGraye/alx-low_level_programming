#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concantenates two strings
 * @src: source string
 * @dest: destination string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
