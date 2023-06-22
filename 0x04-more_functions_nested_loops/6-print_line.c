/*
 * File: print_line
 */

#include "main.h"

/**
 * print_line - prints line in terminal
 * @n : character
 *
 * _putchar: result, otherwise
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
for (int i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
