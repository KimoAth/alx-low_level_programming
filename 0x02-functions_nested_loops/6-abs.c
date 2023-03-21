#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @n: integer value
 * Return: 1 if n > 0, 0 if n == 0, positive if negative
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
