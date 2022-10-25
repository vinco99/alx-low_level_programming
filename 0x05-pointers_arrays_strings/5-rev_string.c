#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int c;
	int i;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		reverse = s[i];
		s[i] = s[c];
		s[c] = reverse;
	}

}
