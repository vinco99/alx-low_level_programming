#include "main.h"

/**
 * _strlen - returns the string lenght
 * @s: the string
 *
 * Return: l as the string lenght.
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
