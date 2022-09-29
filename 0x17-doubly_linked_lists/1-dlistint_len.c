#include "lists.h"

/**
 * dlistint_len - A function that get the number of elements in a linked list
 * @h: Pointer to the head
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;
	if (h == NULL)
		return (num);
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
