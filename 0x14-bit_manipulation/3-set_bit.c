#include "main.h"

/**
 * set_bit - set value of a bit to 1
 * @index: index
 * @n: number which value is gotten
 * Return: set value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int top;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	top = 1;
	top = top << index;
	*n = ((*n) | top);
	return (1);
}
