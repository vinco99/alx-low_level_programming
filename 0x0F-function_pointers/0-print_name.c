#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: the name
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}
