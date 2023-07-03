#include "main.h"
#include <stdio.h>

/**
* _strchr - locates character
* @s: char s
* @c: char c
* Return: result, otherwise
*/

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'  ; i++)
{
if (s[i] == c)
{
return (s + i);
}
}

return ('\0');
}
