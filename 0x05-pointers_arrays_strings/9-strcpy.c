#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies string pointed to src
* @dest: char pointer
* @src: char pointer
* Return: result, otherwise
*/

char *_strcpy(char *dest, char *src)
{
int src_length = 0;
int i = 0;

while (*(src + src_length) != '\0')
{
src_length++;
}
for (; i < src_length; i++)
{
dest[i] = src[i];
}
dest[src_length] = '\0';
return (dest);
}
