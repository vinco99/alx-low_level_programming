#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for a set of bytes
 * @s: the string
 * @accept: bytes
 *
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
