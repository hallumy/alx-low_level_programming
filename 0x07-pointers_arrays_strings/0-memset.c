#include "main.h"

/**
 * _memset -fills the memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: maximum number of bytes to use
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
