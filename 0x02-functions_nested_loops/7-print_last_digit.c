#include "main.h"
/**
 * print_last_digit - Prints last digit.
 * @n: the last digit of the number.
 * Return: Success.
 */
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 0)
{
	ld = ld * -1;
}
_putchar(ld + '0');
return (ld);

