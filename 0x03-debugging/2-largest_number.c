#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest=0;

    if (a > largest)
    {
        largest = a;
    }
    else if (b > largest)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
