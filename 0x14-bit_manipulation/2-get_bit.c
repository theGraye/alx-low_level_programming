#include "main.h"

/**
 * get_bit - returns value of bit at an index
 * @index: index
 * @n: number to check value of
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
