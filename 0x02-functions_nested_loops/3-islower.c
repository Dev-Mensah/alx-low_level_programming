#include "main.h"
#include <stdio.h>

/**
 * _islower - print lower alphabets
 *
 * Return: Always 0 (Success)
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
