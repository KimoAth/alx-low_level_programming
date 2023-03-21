#include "main.h"
/**
 * _islower - returns 1 if lowercase alphabet else 0
 * @c: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 97  && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
