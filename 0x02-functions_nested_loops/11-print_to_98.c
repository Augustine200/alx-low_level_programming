#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Its prints numbers to 98.
 * @n: The number that it will start to print.
 * Return: Success.
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
printf("%d, ", n++);
printf("%d", n);
}
}
else
{
while (n > 98)
{
printf("%d, ", n--);
printf("%d\n", n);
}
}
}
