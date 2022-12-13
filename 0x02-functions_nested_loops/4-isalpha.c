#include "main.h"
/**
 * _isalpha - chhecks for alphabets.
 * @c: character to be checked.
 * Return: Success.
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
return (1);
else
return (0);
}
