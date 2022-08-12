#include "lists.h"

/**
 * len - Calculates the length of a string
 * @str: Constant string
 * Return: The length of the string
 */

int len(const char *str)
{
	int index;

	if (str == NULL)
		return (0);
	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}


/**
 * add_node- Adds node at the beginning of the list
 * @head: pointer to the beginning of the list_t list
 * @str: string assigned to the node
 * Return: A pointer to the head of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL) /*Initializes the next pointer to NULL*/
	{
		new_node->next = NULL;
	}
	else /*Moves  the new node to the head */
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;

	return (*head);
}
