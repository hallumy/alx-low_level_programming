#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end of the list
 * @head: Pointer to the head pointer of the list
 * @n: Value of the new node
 * Return: Address of the new node or Null if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newP, *temp;

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
	if ((*head)->next == NULL)
	{
		(*head)->next = newP;
		newP->prev = *head;
		return (newP);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newP;
	newP->prev = temp;
	
	return (newP);
}
	
	
