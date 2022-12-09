#include <stdio.h>
/**
 * main - Entry.
 *
 * Return: Success.
 */
int main(void)
{
int num;
for (num = 0; num <= 8; num++)
{
putchar((num % 10) + '0');
putchar(',');
}
putchar('9');
putchar('\n');
return (0);
}
