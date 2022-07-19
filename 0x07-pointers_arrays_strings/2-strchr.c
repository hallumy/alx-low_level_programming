#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @c: The character to be located
 * @s:  The string to be searched
 * Return: If c is found a pointer to the occurrence
 *		 If c is not found -  NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
