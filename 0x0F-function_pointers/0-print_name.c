/**
 * File: 3-main.c
 * Author: John Kumeku
 */

#include "function_pointers.
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: callback function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
if (!f || !name)

return;
(*f)(name);
}