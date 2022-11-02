#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int number
 *
 * Return: -1, sqrt
 */
int _sqrt_recursion(int n)
{
	int counter = 1, sqroot = 1, output;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		counter += 1;
		sqroot = counter * counter;
		_sqrt_recursion(n - 1);
	}
	output = counter - 1;

	return (output);
}
