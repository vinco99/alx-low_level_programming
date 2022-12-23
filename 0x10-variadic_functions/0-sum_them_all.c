#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all parameters
 * @n: number of parameters
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n < 1)
	{
		return (0);
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}