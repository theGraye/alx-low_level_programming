#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function copies a string
 * @src: source string
 * @dest: destination string
 * @n: parameter
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
