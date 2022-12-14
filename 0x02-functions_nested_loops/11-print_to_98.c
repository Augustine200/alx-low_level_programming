#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Its prints numbers to 98.
 * @n: The number that it will start to print.
 * Return: Success.
 */
void print_to_98(int n)
{
int i, j;
if (n <= 98)
{
while (n < 98)
{
printf("%d, ", i++);
printf("%d", i);
}
}
else
{
while (n > 98)
{
printf("%d, ", j--);
printf("%d", j);
}
}
}
