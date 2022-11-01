#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of prifixes of substring
 * @s: the string
 * @accept: the to be used
 *
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
