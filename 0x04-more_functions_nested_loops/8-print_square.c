#include "main.h"
/**
 * print_square - prints square
 * @size: number of # to be printed
 *
 * Return: Void
 */

void print_square(int size)
{
	int i = 0;

	while (i < size && size > 0)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size == 0)
		_putchar('\n');
}
