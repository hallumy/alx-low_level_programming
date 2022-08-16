#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: Pointer to the end of the listint_t list
 * @n: Constant integer
 * Return: A pointer to the head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	temp = *head;
	if (head == NULL)
		return (NULL);

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL) /* transversing to the last node */
		temp = temp->next;
	temp->next = new_node;

	return (*head);
}

/**
 * create_node - Create a node
 * @n: Value for the node
 * Return: Apointer to the beginning of the list
 */

listint_t *create_node(const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
