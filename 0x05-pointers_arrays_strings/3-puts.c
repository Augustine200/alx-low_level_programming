#include "main.h"
/**
 * _puts - It prints a string
 * @str: the string to be  printed.
 * Return: Success.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
