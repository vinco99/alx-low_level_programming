#include "main.h"

/**
 * cap_string - Capitalizes all words of the string
 * @s: the string
 *
 * Return: char.
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] -= 32;
	}

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i - 1] == ' ' ||
				s[i - 1] == '\n' ||
				s[i - 1] == '\t' ||
				s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '.' ||
				s[i - 1] == ':' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == '}')
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
		}
	}

	return (s);
}
