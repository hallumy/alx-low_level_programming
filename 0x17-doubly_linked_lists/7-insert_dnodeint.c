#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given position.
 * @h: Pointer to a pointer to the first node on a linked list.
 * @idx: Position for node to be inserted.
 * @n: Number in the node.
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *tmp, *new, *tmp_prev;

	if (head == NULL && idx > 0)
	return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;

	if (idx == 0)
	{
		if (*head)
	{
		new->next = *head;
		(*head)->prev = new, *head = new;
	}
		else
			*head = new;
		return (new);
	}
	count = 1, tmp = (*head)->next;
	while (tmp)
	{
		if (idx == count)
		{
			tmp->prev->next = new, new->prev = tmp->prev;
			new->next = tmp, tmp->prev = new;
			return (new);
		}
		count++;
		tmp_prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL && count == idx)
	{
		tmp_prev->next = new, new->prev = tmp_prev;
		return (new);
	}
	free(new);
	return (NULL);
}
