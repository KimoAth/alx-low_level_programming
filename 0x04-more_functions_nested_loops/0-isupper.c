#include <stdio.h>

/**
 * _isupper : returns 1 if c is upperCase 0 otherwise
 * Return: returns 1 if c is upperCase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
