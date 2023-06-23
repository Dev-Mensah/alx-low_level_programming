#include "main.h"
#include <stdio.h>

/**
* print_triangle - prints triangle
*
* @size: integer
* _putchar: result, otherwise
*/

void print_triangle(int size)
{
int i, j;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size ; j >= 1; j--)
{
if (i < j)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else if (size <= 0)
_putchar('\n');
}
