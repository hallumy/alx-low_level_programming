#include "main.h"

/**
 * print_triangle - prints a # triangle
 *
 * @size: integer type
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0;

	while (i <= size && size > 0)
	{
		int j = 0;

		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
	if(i == 0)
		_putchar('\n');
}
