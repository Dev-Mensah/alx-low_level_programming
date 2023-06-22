/*
 * File: print_line
 */

#include "main.h"

/**
 * print_line - prints line in terminal
 * @n: integer
 *
 * _putchar: result, otherwise
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return (0);
}
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
