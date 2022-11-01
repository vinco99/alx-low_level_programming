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

	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
