#include "lists.h"

/**
 * free_listint - Frees listint_t list
 * @head: pointer to the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
