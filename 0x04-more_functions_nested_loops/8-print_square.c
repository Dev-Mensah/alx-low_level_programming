#include "main.h"
#include <stdio.h>

/**
* print_square - prints square
* @size: integer
*
* _putchar: result, otherwise
*/

void print_square(int size)
{
int i, j;

if (size <= 0)
_putchar('\n');

for (i = 0; i < size; i++)
{
for (j = 0; j < (size); j++)
{
_putchar('#');
}
_putchar('\n');
}
}
