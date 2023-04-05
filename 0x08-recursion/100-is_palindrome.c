#include "main.h"
/**
 *is_palindrome - a function checks if the the string is palindrome
 *@s: the string we trying to check
 *Return: either 0 or 1
 */
int is_palindrome(char *s)
{
	int len = _str(s);

	return (palindromeHelper(s, len, 0));
}
/**
 *palindromeHelper - a function checks if the string inputted is palindrome
 *@s: the string we check
 *@x: the length of the string
 *@i: paramether to count
 *Return: either 1 or 0
 */
int palindromeHelper(char *s, int x, int i)
{
	if (s[i] == s[x - i - 2])
	{
		return (palindromeHelper(s, x, i + 1));
	}
	else if (x / 2 < i)
	{
		return (1);
	}
	return (0);
}
/**
 *_str - a function counts the length of a string
 *@s: the string
 *Return: the int of the length
 */
int _str(char *s)
{
	int n = 1;

	if (*s != '\0')
	{
		n = n + _str(s + 1);
	}
	return (n);
}
