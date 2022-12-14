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
for (i = n; i <= 98; i++)
{
if (i == 98)
{
break;
}
else
{
printf("%d, ", i);
}
}
for (j = n; j >= 98; j--)
{
if (j == 98)
{
break;
}
else
{
printf("%d, ", j);
}
}
}
