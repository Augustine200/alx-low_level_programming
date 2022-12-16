#include <stdio.h>
int main(void)
{
int i, j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j >= i; j--)
{
if (i == j || i + j == 10 - 1)
{
putchar('\\');
}
else

putchar('\n');
}
}
