#include "main.h"
#include <stdio.h>
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
_putchar(n / 10);
_putchar(n % 10 + '0');
}
else
{
_putchar(n / 10);
_putchar(n % 10 + '0');
}
return (n);
}
