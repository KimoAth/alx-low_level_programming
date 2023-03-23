#include "main.h"

/**
 * isdigit - checks for digit 0 through 9
 * @c: the character that is gonna be checked
 *
 * Return: 1 if c is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
