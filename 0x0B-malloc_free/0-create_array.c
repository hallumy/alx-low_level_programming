#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of characters and intializes
 *		it with a specific char
 * @size: size of array to be intitialized
 * @c: The character to be initialized with
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int index;

	if (size == 0)
	return (NULL);
	str = malloc(size(char) * size);
	if (str == NULL)
		return (NULL);
	index = 0;
	while (index < size)
	{
		str[index] = c;
		index++;
	}
	return (str);
}
