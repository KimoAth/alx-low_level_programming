#include "main.h"
/**
 * -islower - checks for lowercase
 * 
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 97  && c <= 122 ))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
