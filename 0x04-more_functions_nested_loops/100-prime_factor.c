#include <stdio.h>

/**
 * main - Prints the prime numbers of n
 *
 * Return: 0.
 */
int main(void)
{
	long int i, n, largest;

	n = 612852475143;
	i = 2;

	while (n != 0)
	{
		if (n % i != 0)
		{
			i = i + 1;
		}
		else
		{
			largest = n;
			n = n / i;
			if (n == 1)
			{
				printf("%ld\n", largest);
				break;
			}
		}
	}

	return (0);
}
