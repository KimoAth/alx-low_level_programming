#include "main.h"
/**
 *is_prime_number - a function that returns 1 if the is prime otherwise return.
 *@n: the number we checking
 *Return: either 1 or 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
	{
		return (0);
	}
	else if (n <= 2)
	{
		return (0);
	}
	else
	{
		return (primeHelper(n, 3));
	}
	return (1);
}
/**
 *primeHelper - checking if the number is prime or not
 *@n: the number we checking
 *@x: a number we checking with
 *Return: either 1 or 0
 */
int primeHelper(int n, int x)
{
	if (x * x <= n)
	{
		if (n % x == 0)
		{
			return (0);
		}
		else
		{
			return (primeHelper(n, x + 2));
		}
	}
	return (1);
}
