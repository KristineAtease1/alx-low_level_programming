#include <stdio.h>
#include "main.h"

/**
 *swap_int - function that swaps values of two integers.
 *@a: value that will be evaluated.
 *@b: value that will be evaluated.
 *Return: not
 */

void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
