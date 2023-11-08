#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: target array
 * @size: array size
 * @cmp: function pointer to compare search int
 * Return: int element match, -1 if size <=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (1);
	}
	return (-1);
}
