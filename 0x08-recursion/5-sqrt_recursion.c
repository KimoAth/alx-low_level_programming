#include "main.h"
/**
 *_sqrt_recursion - a function returns the natural square root of a number.
 *@n: the number we are trying getting the square root
 *Return:the square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (squareRootHelper(n, 1));
	}
}
/**
 *squareRootHelper - this function checks if the int x is the square root of n
 *@n: the number we trying to get it square root
 *@x: the number we are checking
 *Return: the square root or -1
 */
int squareRootHelper(int n, int x)
{
		if (x * x < n)
		{
			return (squareRootHelper(n, x + 1));
		}
		else if (x * x > n)
		{
			return (-1);
		}
		return (x);
}
