#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
putchar('0');

for (int i = 1; i <= 9; i++)
{
putchar(',');
putchar(' ');
putchar('0' + i / 10);
putchar('0' + i % 10);
i++;
}

return (0);
}
