#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: the string parameter
 */
void puts_half(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}

	str -= (n / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
