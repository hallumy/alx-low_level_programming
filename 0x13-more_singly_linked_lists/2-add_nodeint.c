#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to the beginning of the listint_t list
 * @n: integer assigned to the head of the node
 * Return: A pointer to the head of the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL) /** Initializes the next pointer to NULL*/
	{
		new_node->next = NULL;
	}
	else /*Moves the new node to the head */
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (*head);
}
