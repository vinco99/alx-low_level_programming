#include "main.h"

/**
 * print_sign - prints signs
 * @n: Parameter sign
 *
 * Return: 1 if n more than zero, 0 if n is zero and -1 if n is less than zero.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

}
