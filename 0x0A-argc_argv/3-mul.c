#include "main.h"
#include "stdlib.h"
#include <stdio.h>

/**
 * main - multiplies two parameters
 * @argc: parameter
 * @argv: array
 *
 * Return: 0  or 1
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);

	return (0);

}
