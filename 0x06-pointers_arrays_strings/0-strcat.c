#include "main.h"
/**
 * _strcat - concatenates @sr  to @dest
 * @dest: The destination string to be appended upon
 * @src: The source string to append to @dest
 * Return: pointer to the returning string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
