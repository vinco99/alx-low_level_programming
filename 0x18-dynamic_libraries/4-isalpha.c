#include "main.h"

/**
 *  _isalpha - checks if char is an alphabet
 *  @c: Parameter char
 *  Return: 1 if char is an alphabet, else 0.
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
