#include <stddef.h>
#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of the substring needle
 *         in the string haystack, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
    char *haystack_ptr, *needle_ptr;

    if (*needle == '\0') {
        return haystack;
    }

    while (*haystack != '\0') {
        haystack_ptr = haystack;
        needle_ptr = needle;

        while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr) {
            haystack_ptr++;
            needle_ptr++;
        }

        if (*needle_ptr == '\0') {
            return haystack;
        }

        haystack++;
    }

    return NULL;
}
