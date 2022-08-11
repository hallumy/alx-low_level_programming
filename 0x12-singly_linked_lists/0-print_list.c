#include "lists.h"

/**
 * print_list - Prints all the elements in the linked list_t
 * @h: Pointer to the linked list head
 * Return: The number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
