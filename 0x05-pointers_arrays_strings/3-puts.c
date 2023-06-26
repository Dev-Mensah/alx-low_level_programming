#include "main.h"
#include <stdio.h>

/**
* _puts - print string to stdout
* @str: string input
* _putchar: result, otherwise
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}

_putchar('\n');
}
