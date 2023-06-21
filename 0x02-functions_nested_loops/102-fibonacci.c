#include <stdio.h>

/**
* print_fibonacci - Entry point of the program
*
* main - main function
*
* @n: first integer
*
* Return: Always 0
*/

void print_fibonacci(int n)
{
int fib1 = 1, fib2 = 2, fib_next, i;

printf("%d, %d, ", fib1, fib2);

for (i = 3; i <= n; i++)
{
fib_next = fib1 + fib2;
printf("%d", fib_next);

if (i < n)
{
printf(", ");
}

fib1 = fib2;
fib2 = fib_next;
}

printf("\n");
}

int main(void)
{
int n = 50;

printf("The first %d Fibonacci numbers are: \n", n);
print_fibonacci(n);

return (0);
}
