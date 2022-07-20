#include "main.h"

/**
 * factorial - Prints factorial of a number
 * @n: The input integer
 * Return: If n > 0 the factorial of n
 * if n is less than zero, return -1, indicating error
 */
int factorial(int n)
{
	int f = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	f *= factorial(n - 1);

		return (f);

}
