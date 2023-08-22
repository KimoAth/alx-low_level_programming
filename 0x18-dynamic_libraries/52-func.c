#include <stddef.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area.
 * @b: Value to be set.
 * @n: Number of bytes to be set to the value.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
        char *original_s = s;

        while (n > 0)
        {
                *s = b;
                s++;
                n--;
        }

        return original_s;
}

/**
 * _memcpy - Copies memory area from src to dest.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the destination memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        char *original_dest = dest;

        while (n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }

        return original_dest;
}

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to be located.
 *
 * Return: A pointer to the first occurrence of c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
        while (*s != '\0')
        {
                if (*s == c)
                {
                        return s;
                }
                s++;
        }

        if (*s == c)
        {
                return s;
        }

        return NULL;
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int count = 0;

        while (*s != '\0' && *s != ' ')
        {
                if (_strchr(accept, *s) == NULL)
                {
                        break;
                }
                count++;
                s++;
        }

        return count;
}

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: A pointer to the first occurrence in s of any of the characters
 *         in accept, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
        while (*s != '\0')
        {
                if (_strchr(accept, *s) != NULL)
                {
                        return s;
                }
                s++;
        }

        return NULL;
}
