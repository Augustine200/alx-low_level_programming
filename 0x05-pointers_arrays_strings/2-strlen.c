#include "main.h"
#include <string.h>
/**
 * _strlen - the length of a string.
 * @s: The string that its length will be checked.
 * Return: Success.
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
}
return len;
}
