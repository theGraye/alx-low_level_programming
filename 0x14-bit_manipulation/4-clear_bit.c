#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 * @index: index
 * @n: pointer to number
 * Return: 1 if successful or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int top;

	top = 1;
	top = top << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = top ^ *n;

	return (1);
}
