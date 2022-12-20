#include "main.h"
#include <string.h>
/**
 * print_rev - It prints reverse of a string.
 * @s: The string.
 * Return: Success.
 */
void print_rev(char *s)
{
int length, i;
length = strlen(s);
for (i = length; i >= 0; i--)
{
_putchar(s[i]--);
}
_putchar('\n');
}
