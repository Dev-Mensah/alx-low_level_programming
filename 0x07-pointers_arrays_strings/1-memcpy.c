#include "main.h"
#include <stdio.h>

/**
* _memcpy - copys memory space
* @dest: char dest
* @src: char src
* @n: unsigned n
* Return: result, otherwise
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

