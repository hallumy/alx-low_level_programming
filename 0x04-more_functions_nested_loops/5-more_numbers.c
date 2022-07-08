#include "main.h"

/**
 * more_numbers - Prints 10 times numbers between 0 and 14
 *
 * Return: void
 */
void more_numbers(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{
		a = 0;
	while (a < 15)
		{
			if (a > 9)

			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
	i++;
	_putchar('\n');
	}
}
