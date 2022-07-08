#include "main.h"

/**
 * print_line - Prints a straight line
 *
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int x = 0;

	while (x < n && n > 0)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
