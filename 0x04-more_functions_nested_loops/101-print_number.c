#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: number to be printed.
 */
void print_number(int n)
{
if (n > 9)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
