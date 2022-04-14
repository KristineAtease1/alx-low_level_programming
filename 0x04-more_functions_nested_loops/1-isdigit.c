#include "main.h"
/**
 * _isdigit - function that checks whether it is a digit
 * @c: takes in a character/digit
 * Return: 1 if it is a digit and 0 if it is not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
