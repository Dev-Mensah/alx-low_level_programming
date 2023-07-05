#include "main.h"
#include <stdio.h>

/**
* is_prime_recursive -  recursive prime
* @n: integer
* @divisor: integer
* Return: result, otherwise
*/

int is_prime_recursive(int n, int divisor)
{
if (n < 2 || n % divisor == 0)
return (0);

if (divisor > n / 2)
return (1);

return (is_prime_recursive(n, divisor + 1));
}

/**
* is_prime_number -  prime number
* @n: integer
* Return: result, otherwise
*/

int is_prime_number(int n)
{
if (n < 2)
return (0);

return (is_prime_recursive(n, 2));
}
