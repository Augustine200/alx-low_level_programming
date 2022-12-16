#include "main.h"
/**
 * more_numbers - It prints number from 0 to 14.
 * Return: 0
 */
void more_numbers(void)
{
int j, k;
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 14; k++)
{
if (k > 9)
{
_putchar((k / 10) + '0'); 
}
_putchar((k % 10) + '0');
}
_putchar('\n');
}
}
