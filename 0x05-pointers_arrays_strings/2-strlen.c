#include <stdio.h>
#include "main.h"

/**
 *_strlen - funtion that returns length of a string
 *@s: value that will be evaluated
 *Return: len.
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
