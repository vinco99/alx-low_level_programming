#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 with Fizz Buzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
