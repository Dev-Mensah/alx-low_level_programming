#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion -  reverse recursion
* @s: char a
* _putchar: result, otherwise
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
_putchar(*s);
}
