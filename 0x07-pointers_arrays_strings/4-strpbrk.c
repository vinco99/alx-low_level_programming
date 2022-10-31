#include "main.h"

/**
 * _strpbrk - Searches a string for a set of bytes
 * @s: the string
 * @accept: bytes
 *
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	while (s[j])
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		if (s[i] == accept[i])
		{
			return (s);
		}
	}

	return ('\0');
}
