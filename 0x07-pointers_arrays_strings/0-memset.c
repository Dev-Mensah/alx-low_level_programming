#include "main.h"
#include <stdio.h>

/**
* _memset - generates random  numbers
* @s: char s
* @b: char b
* @n: unsigned n
* Return: result, otherwise
*/

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
