#include <stdio.h>
int main(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for(j = 10 - i ; j > 0; j--)
printf(" ");
for (j = 0; j < i; j++)
printf("%d ", j);
if (i == 10)
continue;
printf("\n");
}
return (0);
}
