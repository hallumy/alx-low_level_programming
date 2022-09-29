#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: Number of nodes of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	num = 0;
	if (h == NULL)
		return (num);
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
