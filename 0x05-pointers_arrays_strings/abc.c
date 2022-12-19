#include <stdio.h>
void reset_to_98(int *n)
{
*n = 98;
}
int main(void)
{
int p;
p = 500;
printf("Before call p = %d\n", p);
reset_to_98(&p);
printf("After call p = %d\n", p);
}
