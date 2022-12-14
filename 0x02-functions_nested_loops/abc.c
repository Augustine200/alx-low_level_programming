#include <stdio.h>
int main(void)
{
int n, i, j;
scanf("%d", &n);
if( n < 98)
{
while(n < 98)
{
printf("%d, ", i++);
printf("%d", i);
}
}
for (j = n; j >= 98; j--)
{
printf("%d, ", j--);
printf("%d", j);
}
return (0);
}
