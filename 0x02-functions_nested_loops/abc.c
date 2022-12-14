#include <stdio.h>
int main(void)
{
int n, i, j;
scanf("%d", &n);
for (i = n; i <= 98; i++)
{
printf("%d\n", i);
printf("\n");
}
for (j = n; j >= 98; j--)
printf("%d\n", j);
return (0);
}
