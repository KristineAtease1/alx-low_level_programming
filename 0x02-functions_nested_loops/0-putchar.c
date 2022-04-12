#include <main.h>

/**
 * main - program to print "_putchar"
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int i;
char p[] = "putchar";
for (i = 0; i < 8; i++)
{
_putchar(p[i]);
}
_putchar('\n');
return (0);
}
