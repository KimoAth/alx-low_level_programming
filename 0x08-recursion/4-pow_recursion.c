#include "main.h"
/**
 *_pow_recursion - a function returns the value of x raised to the power of y.
 *@x: the number we gonne get it power
 *@y: the power
 *Return: always the result
 */

int _pow_recursion(int x, int y)
{
	if (y > 1)
	{
		x = x * _pow_recursion(x, y - 1);
	}
	else if (y == 0)
	{
		x = 1;
	}
	else if (y < 0)
	{
		x = -1;
	}
	return (x);
}
