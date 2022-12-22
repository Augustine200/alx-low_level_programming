#include "main.h"
/**
 * string_toupper - It changes lowercase to uppercase.
 * @s: the string.
 * Return: 0.
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (i >= 'a' && i <= 'z')
s[i] = s[i] - 32;
}
}
