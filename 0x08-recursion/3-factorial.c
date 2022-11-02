#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: the number
 *
 * Return: -1 and 1.
 */

int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}

	return (i);
}
