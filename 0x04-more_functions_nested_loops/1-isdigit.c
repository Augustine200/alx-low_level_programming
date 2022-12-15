#include "main.h"
/**
 * _isdigit - To check if the inputed data is a digit.
 * @c: The input to be checked.
 * Return: 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
