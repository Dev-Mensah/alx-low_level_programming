#include "main.h"
#include <stdio.h>

/**
* _atoi - converts string to integer
* @s: char string
* Return: result, otherwise
*/

int _atoi(char *s)
{
int i, is_valid, digit, count_minus, number, length;

i = 0;
count_minus = 0;
number = 0;
length = 0;
is_valid = 0;
digit = 0;

while (s[length] != '\0')
length++;

while (i < length && is_valid == 0)
{
if (s[i] == '-')
++count_minus;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (count_minus % 2)
digit = -digit;
number = number * 10 + digit;
is_valid = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
is_valid = 0;
}
i++;
}

if (is_valid == 0)
return (0);

return (number);
}
