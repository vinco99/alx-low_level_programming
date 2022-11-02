#include "main.h"

/**
 * is_prime_number - return 1 if the input n is a prime number
 * @n: number
 *
 * Return: 0 and 1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n > 1)
	{
		if (i != n && n % i == 0)
		{
			return (0);
		}
		else if (i == n && n % i == 0)
		{
			return (1);
		}
		else
		{
			i += 1;
			is_prime_number(n);
		}
	}

}
