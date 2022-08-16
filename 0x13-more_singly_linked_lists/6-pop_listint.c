#include "lists.h"
/**
 * pop_listint - Deletes the first element of a list
 * @head: pointer to the first node of the list
 * Return: The number inside the node that is deleted
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
