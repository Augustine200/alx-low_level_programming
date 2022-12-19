#include <stdio.h>
/**
 * swap_int - It swaps number.
 * @a: first Number.
 * @b: second number.
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
