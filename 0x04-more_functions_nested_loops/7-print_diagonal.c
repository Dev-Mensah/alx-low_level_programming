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
int i, j;

if (n <= 0)
_putchar('\n');
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

}
