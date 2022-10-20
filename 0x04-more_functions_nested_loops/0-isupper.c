#include "main.h"

/**
 * _isupper - checks if c is upper case or lowercase
 * @c - parameter to be checked
 *
 * Return: 1 if c is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' || c <= 'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
