#include <stdio.h>
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
int main(void)
{
int a = 80, b = 90; 
swap_int(&a, &b);
printf("a = %d and b = %d\n", a, b);
}
