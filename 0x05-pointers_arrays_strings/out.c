#include <stdio.h>
#include <string.h>
int main(void)
{
int i, length, j = 0;
char bug[] = "he is a man";
length = strlen(bug);
while (bug != '\0')
if (j % 2 == 0)
printf("%s\n", bug);
j++;
*bug++;
}
printf("\n");
return (0);
}
