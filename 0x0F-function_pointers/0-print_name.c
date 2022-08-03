#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @f: A pointer to a function to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || *name != '\0' || f != NULL)

	f(name);
}
