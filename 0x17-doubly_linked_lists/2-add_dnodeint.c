#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to the head pointer
 * @n: Value of node
 * Return: Address of new or null if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newP;

	newP = malloc(sizeof(dlistint_t));
	if (newP == NULL)
		return (NULL);
	newP->n = n;
	newP->prev = NULL;
	newP->next = NULL;

	if (*head == NULL)
	{
		*head = newP;
		return (newP);
	}
	(*head)->prev = newP;
	newP->next = *head;
	*head = newP;
	return (newP);
}
