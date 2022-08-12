#include "lists.h"
list_t *create_node(const char *str);

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
 * add_node_end - Adds a node at the end of a list
 * @head: Pointer to the beginning of a list
 * @str: The string to add to the node
 * Return: A pointer to the beginning of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	tmp = *head;
	if (head == NULL)
		return (NULL);

	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;

	return (*head);
}

/**
 * create_node - Creates a node
 * @st: Value for the node
 * Return: A pointer to the beginning of the list
 */
list_t *create_node(const char *str)
{
	list_t *new_node;
	char *dup;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	new_node->str = dup;
	new_node->len = len(str);
	new_node->next = NULL;

	return (new_node);
}
