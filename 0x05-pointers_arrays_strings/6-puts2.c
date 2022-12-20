#include "main.h"
#include <string.h>
/**
 * puts2 - prints even character.
 * @str: The string.
 * Return: Success.
 */
void puts2(char *str)
{
int i, length, j = 0;
length = strlen(str);
for (i = 0; i <= length - 1; i++)
{
if (j % 2 == 0)
_putchar(*str);
else
{
continue;
}
str++;
j++;
}
_putchar('\n');
}
