#include "lists.h"

/**
 * create_new_node - creates a new node
 * @n: data of node
 * Return: pointer to node
 */

listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_nodeint_at_index - insert node at index
 * @head: pointer to first element
 * @idx: index to the new node
 * @n: data of new node crreated
 * Return: address of newly created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *tmp_old;
	listint_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		*head = new_node;
	}
	for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = tmp;
	else
	{
		tmp_old = tmp->next;
		tmp->next = new_node;
		new_node->next = tmp_old;
	}
	return (new_node);
}
