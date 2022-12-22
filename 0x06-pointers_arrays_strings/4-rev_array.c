#include "main.h"
/**
 * reverse_array - Reverse an array.
 * @a: Array name.
 * @n: number of element.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; i >= 0; i--)
{
_putchar(a[i]);
}
}
