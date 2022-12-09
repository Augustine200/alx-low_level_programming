#include <stdio.h>
/**
 * main - Entry.
 *
 * Return: Success.
 */
int main(void)
{
int num, num2, num3 = '0';
for (num = '0'; num <= '9'; num++)
{
for (num2 = num3; num2 <= '9'; num2++)
{
if (num != num2)
{
putchar(num);
putchar(num2);
}
if (num == num2)
{
continue;
}
else if (num == '8' && num2 == '9')
break;
else
{
putchar(',');
putchar(' ');
}
}
num3++;
}
putchar('\n');
return (0);
}
