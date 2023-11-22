#include "lists.h"

/**
 * free_listint - function frees alinked listint_t list
 * @head: pointer to first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
