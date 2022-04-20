#include <stdio.h>
#incude "main.h"

/**
 *main - function that prints a string followed by a new line to stdout
 *@str: value that will be evaluated.
 *Return 0
 */

void _puts(char *str)
{
int l = 0;
while (*(str + l) != '\0'
{
_putchar(str[l]);
l++;
_putchar('\n');
}
    
