#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*S);
		_puts_recursion(S + 1);
	}
	else
	{
		_putchar('\n');
	}

}
