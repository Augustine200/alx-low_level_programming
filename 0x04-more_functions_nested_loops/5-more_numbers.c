#include "main.h"
/**
 * more_numbers - It prints number from 0 to 14.
 * Return: 0
 */
void more_numbers(void)
{
int i, j, k;
for (i = '1'; i < '2'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
if (i == '1' && j == '4')
{
break;
}
else
{
_putchar(i);
_putchar(j);
}
}
}
_putchar('\n');
}
}
