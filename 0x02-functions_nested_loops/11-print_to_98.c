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
putchar(i);
putchar(32);
putchar(44);
if (i == 98)
{
break;
}
else
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
}
}
for (j = n; j >= 98; j--)
{
putchar(j);
putchar(32);
putchar(44);
if (j == 98)
{
break;
}
else
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
}
}
}
