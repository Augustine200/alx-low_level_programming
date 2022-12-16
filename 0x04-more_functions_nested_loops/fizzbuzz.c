#include <stdio.h>

/**
* main - print fizzbuzz
* Return: Always 0
*/
int main(void)
{
int a;
printf("1");
for (a = 2; a <= 100; a++)
{
printf(" ");
if (a % 3 == 0)
printf("Fizz");
if (a % 5 == 0)
printf("Buzz");
if (a % 3 != 0 && a % 5 != 0)
printf("%d", a);
}
printf("\n");
return (0);
}
