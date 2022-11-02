#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string
 *
 * Return: i.
 */

 int _strlen_recursion(char *s)
{
	int strl = 0;

	if (*s)
	{
		strl++;
		strl += _strlen_recursion(s + 1);
	}
	return (strl);
}
