#include "main.h"
#include <unistd.h>

/**
 *_puts -function that will print a strin to stdout
 *@str: value to be evaluated.
 *Return: not.
 */

void _puts(char *str)
{
int l = 0;
while (*(str + l) != '\0')
{
_putchar(str[l]);
l++;
}
_putchar('\n');
}
