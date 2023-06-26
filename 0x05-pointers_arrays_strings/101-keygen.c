#include "main.h"
#include <stdio.h>

/**
* main - generates random  numbers
* _putchar: print out
* Return: result, otherwise
*/

int main(void)
{
int password[100];
int i, random_number, total;

total = 0;

srand(time(NULL));

for (i = 0; i < 100; i++)
{
password[i] = rand() % 78;
total += (password[i] + '0');
putchar(password[i] + '0');
if ((2772 - total)-'0' < 78)
{
random_number = 2772 - total - '0';
total += random_number;
putchar(random_number + '0');
break;
}
}

return (0);
}
