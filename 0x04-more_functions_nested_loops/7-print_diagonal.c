/*
 * File: print_diagonal
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints line in terminal
 * @n: integer
 *
 * _putchar: result, otherwise
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
