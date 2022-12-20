#include "main.h"
#include <stdio.h>
#include <string.h>
void print_rev(char *s)
{
int length, i;
length = strlen(s);
for (i = length - 1; i >= 0; i--);
{
putchar(s[i]);
}
}
int main(void)
{
char *bug = "he is a man";
print_rev(bug);
return (0);
}
