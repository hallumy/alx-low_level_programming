#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if c is uppercase. 0 for the rest
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
