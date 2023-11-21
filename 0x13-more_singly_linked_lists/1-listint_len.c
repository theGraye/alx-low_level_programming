#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: head pointer
 * Return: numbwe of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
