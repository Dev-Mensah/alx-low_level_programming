#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion -  strLen recursion
* @s: char a
* Return: result, otherwise
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
