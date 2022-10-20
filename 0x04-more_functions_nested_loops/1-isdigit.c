#include "main.h"

/**
 * _isdigit - checks if c is a digit using its ACSII number
 * @c: the paramer number
 *
 * Return: 1 if it is a digit, otherwise 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
