#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: the string
 *
 * Return: char.
 */
char *string_toupper(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] = s[j] - 32;
		}

		j++;
	}
	return (s);
}
