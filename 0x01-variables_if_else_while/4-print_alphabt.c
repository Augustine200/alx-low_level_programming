#include <stdio.h>
/**
 * main - Entry.
 *
 * Return: Success.
 */
int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc != 'e' && lc != 'q')
putchar(lc);
}
putchar('\n');
return (0);
}
