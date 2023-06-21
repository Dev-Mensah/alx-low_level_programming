#include "main.h"
#include <stdio.h>

/**
* print_sign - Prints the sign of a number
* @n: The number to check
*
* Return: 1 if n is greater than zero, 0 if n is zero,
*         -1 if n is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
return ("+%d\n", 1);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1);
}
}

