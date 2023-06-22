/*
* File: print_numbers
*/

#include "main.h"

/**
* print_numbers - prints numbers
*
* _putchar: result, otherwise
*/
void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar('0' + i);
}

_putchar('\n');
}
