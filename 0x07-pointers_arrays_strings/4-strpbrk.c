#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The character to find
 *
 * Return: If the byte matches accept return a pointers
 *		If no byte found - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;


	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if  (*s[i] == accept[i])

			return (s);
		}
	s++;
	}
	return ('\0')
}

