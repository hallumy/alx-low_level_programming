#include "main.h"

/**
 * print_numbers - Function that prints the numbers 0 to 9
 */
void print_numbers(void)
{
	char x;

	while (x <= 9)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
