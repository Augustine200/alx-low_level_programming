#include "main.h"
/**
 * _islower - checks if a letter is lowercase or uppercase.
 * @c: letter to be checked.
 * Return: Return c.
 */
int _islower(int c)
{
c = 'b';
c = 'B';
if (c >= 97 && c <= 122)
_putchar('1');
else
_putchar('0');
}
