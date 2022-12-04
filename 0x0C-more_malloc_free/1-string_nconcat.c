#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: string length
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int strl1 = 0, strl2 = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[strl1] != '\0')
		strl1++;

	while (s2[strl2] != '\0')
		strl2++;

	if (n >= strl2)
		n = strl2;

	p = malloc((strl1 + n + 1) * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}

	for (i = 0; i < strl1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (strl1 + n); i++)
	{
		p[i] = s2[i - strl1];
	}
	p[i] = '\0';

	return (p);
}
