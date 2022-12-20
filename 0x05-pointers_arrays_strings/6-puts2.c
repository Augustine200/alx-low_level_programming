#include "main.h"
#include <string.h>
/**
 * puts2 - prints even character.
 * @str: The string.
 * Return: Success.
 */
void puts2(char *str)
{
int i, length;
length = strlen(str);
for (i = 0; i <= length - 1; i++)
{
if (i % 2 == 0)
_putchar(*str);
else
{
continue;
}
str++;
}
_putchar('\n');
}
