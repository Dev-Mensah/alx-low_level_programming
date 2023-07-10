#include "main.h"
#include <stdio.h>

/**
* create_array -  create array
* @size: integer
* @c: integer
* Return: result, otherwise
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

ptr = malloc(size * sizeof(char));
if (size == 0 || !ptr)
return ('\0');
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
