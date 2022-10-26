#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @c: the string
 *
 * Return: char.
 */
char *leet(char *c)
{
	int i, j;

	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == c1[j])
			{
				c[i] = c2[j];
			}
		}
	}

	return (c);
}
