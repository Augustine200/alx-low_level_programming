#include "main.h"
/**
 * _islower - checks if a letter is lowercase or uppercase.
 * @c: letter to be checked.
 * Return: Return c.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
