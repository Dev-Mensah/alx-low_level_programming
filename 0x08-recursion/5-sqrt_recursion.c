#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursive -  square root recursion
* @n: integer
* @guess: integer
* Return: result, otherwise
*/

int _sqrt_recursive(int n, int guess)
{
if (guess * guess == n)
return (guess);

if (guess * guess > n)
return (-1);

return (_sqrt_recursive(n, guess + 1));
}

/**
* _sqrt_recursion -  square root recursion
* @n: integer
* Return: result, otherwise
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_recursive(n, 0));
}
