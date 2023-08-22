#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks if a character is an uppercase letter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
        return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - Checks if a character is a digit (0-9).
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
        return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
        int len = 0;
        while (*s != '\0')
        {
                len++;
                s++;
        }
        return len;
}

/**
 * _puts - Prints a string followed by a newline.
 * @s: The input string to be printed.
 */
void _puts(char *s)
{
        while (*s != '\0')
        {
                putchar(*s);
                s++;
        }
        putchar('\n');
}

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
        char *original_dest = dest;
        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return original_dest;
}