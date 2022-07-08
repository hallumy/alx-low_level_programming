#include "main.h"

/**
 * _isdigit - Checks for a digit between 0 and 9
 *
 * @c: The number input as an integer
 *
 * Return: Returns 1 if c is a digit between 0 and 9
 * return 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
