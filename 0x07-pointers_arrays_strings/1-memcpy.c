#include "main.h"

/**
 * _memcpy - function copies memory area
 * @src: source
 * @dest: destination
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[1] = src[1];
		i++;
	}
	return (dest);
}
