#include "main.h"

/**
 * _islower - checks if char is a lowercase
 * @c: parameter char
 * Return: 1 if char is a lowercase,  else 0.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
