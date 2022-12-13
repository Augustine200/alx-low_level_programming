#include "main.h"

/**
 * _abs - Prints the absolute value of a number
 * @n: number to be checked.
 * Return: SUccess.
 */
int _abs(int n)
{
if (n < 0)
{
n = n + n * -2;
_putchar(n);
}
else
{
_putchar(n);
}
return (n);
}
