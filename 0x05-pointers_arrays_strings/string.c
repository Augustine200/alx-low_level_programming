#include <stdio.h>
#include <string.h>
int main(void)
{
char bug[] = "he is a man";
int lenth, i;
lenth = strlen(bug);
for (i = lenth; i >= 0; i--)
{
putchar(bug[i]);
}
putchar('\n');
printf("%d\n",lenth);
}
