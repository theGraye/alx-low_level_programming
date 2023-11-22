#include "lists.h"

/**
 * sum_listint - function sums up all data of a list
 * @head: pointer to list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
