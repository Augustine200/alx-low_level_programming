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
printf("%d",n);
}
else
{
printf("%d", n);
}
return (n);
}
