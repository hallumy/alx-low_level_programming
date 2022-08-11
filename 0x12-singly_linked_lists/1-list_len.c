#include "lists.h"

/**
 * list_len - Checks the number of elements in a linked list
 * @h: Pointer to the head of the linked list
 * Return: The toal number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
