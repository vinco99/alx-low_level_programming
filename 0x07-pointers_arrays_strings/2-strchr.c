#include "main.h"

/**
 * _strchr - checks for a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	int i, j;

	j = 0;

	while (s[j])
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		if (c == s[i])
		{
			s += i;

			return (s);
		}
	}

	return ('\0');
}
