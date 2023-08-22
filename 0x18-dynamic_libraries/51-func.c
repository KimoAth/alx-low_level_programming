#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
        int sign = 1;
        int result = 0;

        if (*s == '-')
        {
                sign = -1;
                s++;
        }

        while (*s != '\0')
        {
                if (*s >= '0' && *s <= '9')
                {
                        result = result * 10 + (*s - '0');
                        s++;
                }
                else
                {
                        break;
                }
        }

        return result * sign;
}

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
        char *original_dest = dest;

        while (*dest != '\0')
        {
                dest++;
        }

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }

        *dest = '\0';

        return original_dest;
}

/**
 * _strncat - Concatenates n characters from src to dest.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of characters to concatenate.
 *
 * Return: A pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
        char *original_dest = dest;
        while (*dest != '\0')
        {
                dest++;
        }
        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }
        *dest = '\0';

        return original_dest;
}

/**
 * _strncpy - Copies n characters from src to dest.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
        char *original_dest = dest;

        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }

        while (n > 0)
        {
                *dest = '\0';
                dest++;
                n--;
        }

        return original_dest;
}

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
        while (*s1 != '\0' && *s2 != '\0')
        {
                if (*s1 != *s2)
                {
                        return (*s1 - *s2);
                }
                s1++;
                s2++;
        }

        return (*s1 - *s2);
}
