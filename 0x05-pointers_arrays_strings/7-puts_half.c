#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: the string parameter
 */
void puts_half(char *str)
{
	int i, n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	for (i = n / 2; i <= n; i++)
	{
		if (n % 2 != 0)
		{
			_putchar(str[i]);
			_putchar(str[n]);
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
