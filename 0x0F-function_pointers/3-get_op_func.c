#include "3-calc.h"

/**
 * get_op_func - selects the operator function to perform
 * @s: pointer
 * Return: the pointer to the selected function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].ops, s) == 0)
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
