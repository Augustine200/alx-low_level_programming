#include <stdio.h>
/**
 * main - Prints number from  1 to 100 and representing
 * the multiples of 3 and 5 in
 * the numbers with fizz for multiples of 3 and buzz  for multiples
 * of 5 and fizzbuzz for number that is the multiple of the two.
 * Return: 0.
 */
int main(void)
{
int i;
printf("1");
for (i = 2; i <= 100; i++)
{
printf(" ");
if (i % 3 == 0)
printf("Fizz");
if (i % 5 == 0)
printf("Buzz");
else if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 != 0 && i % 5 != 0)
printf("%d", i);
}
printf("\n");
return (0);
}
