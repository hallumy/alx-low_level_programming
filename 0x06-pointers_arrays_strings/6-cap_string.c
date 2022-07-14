#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int i, j;
	int n;
	char separators[] = ",;.!?(){}\n\t\" ";

	for (i = 0, n = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			n = 1;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (separators[j] == str[i])
				n = 1;
		}
			if (n)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
			n = 0;
		}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				n = 0;
		}
			else if (str[i] >= '0' && str[i] <= '9')
				n = 0;
		}
			return (str);
	}
