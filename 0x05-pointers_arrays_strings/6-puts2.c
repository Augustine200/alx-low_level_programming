#include "main.h"
/**
 * puts2 - prints even character.
 * @str: The string.
 * Return: Success.
 */
void puts2(char *str)
{
int i = 0;
while (*str != '\0')
{
if (i % 2 == 0)
{
_putchar(*str);
}
else
{
continue;
}
i++;
str++;
}
}
