#include "main.h"
#include <stdio.h>

/**
* _strcat - generates random  numbers
* @dest: destination char
* @src: source char
* Return: result, otherwise
*/

char *_strcat(char *dest, char *src)
{
int length, destLength;

destLength = 0;
length = 0;
while (dest[length++])
{
dest_length++;
}
for (length = 0; src[length]; length++)
{
dest[dest_length++] = src[length];
}
return (dest);
}
