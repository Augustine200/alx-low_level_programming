#include <stdio.h>
/**
 * main - Entry.
 *
 * Return: SUccess.
 */
int main(void)
{
char x, y;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for(y = 'A'; y <= 'Z'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
