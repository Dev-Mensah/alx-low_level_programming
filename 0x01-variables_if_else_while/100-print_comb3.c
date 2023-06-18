#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i;
int j;
putchar('0');

for (i = 1; i <= 8; i++)
{
putchar(',');
putchar(' ');

for (j = i + 1; j <= 9; j++)
{
putchar('0' + i + j);
if (i != 8 || j != 9)
putchar(',');
}
}

return (0);
}
