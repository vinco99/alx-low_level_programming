#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars and initializes with a specific chars
 * @size: size
 * @c: char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int position;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}
