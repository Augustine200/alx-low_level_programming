#include <stdio.h>
int main(void)
{
int i, j, k, bigNum;
scanf("%d %d %d", &i, &j, &k);
if (i > j && j > k)
bigNum  = i;
else if (j > i && i > k)
bigNum = j;
else
bigNum = k;
printf("%d\n", bigNum);
}
