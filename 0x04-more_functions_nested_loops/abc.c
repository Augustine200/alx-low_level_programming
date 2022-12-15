#include <stdio.h>
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if ( i == 2 || i == 4)
continue;
else
printf("%d", i);
}
printf("\n");
}
