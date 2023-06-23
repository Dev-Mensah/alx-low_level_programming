/*
 * File: print_line
 */

#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line in terminal
 * @n: integer
 *
 * _putchar: result, otherwise
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return ();
}
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
