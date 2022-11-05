#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds all the number parameter
 * @argc: parameter
 * @argv: arry
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		sum += atoi(argv[k]);
	}

	printf("%d\n", sum);

	return (0);
}
