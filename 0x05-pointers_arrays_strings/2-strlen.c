#include "main.h"
#include <stdio.h>

/**
* _strlen - print length of string
* @s: interger
* Return: result, otherwise
*/

int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}
