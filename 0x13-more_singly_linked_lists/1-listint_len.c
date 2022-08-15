#include "lists.h"

/**
 * listint_len - Prints the number of elements in the
 *		linked listint_t list
 * @h: Pointer to the linked list head
 * Return: The number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
