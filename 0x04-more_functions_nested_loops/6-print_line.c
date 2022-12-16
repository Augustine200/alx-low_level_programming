#include "main.h"
/**
 * print_line - It print a line.
 * @n: The number off Underscores to be printed.
 * Return: Success.
 */
void print_line(int n)
{
int i;
if (n <= 0)
_putchar('\n');
else
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
