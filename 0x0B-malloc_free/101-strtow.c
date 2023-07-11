#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* count_word -  create array
* @s: int
* Return: result, otherwise
*/

int count_word(char *s)
{
int flag, cnt, wrd;

flag = 0;
wrd = 0;

for (cnt = 0; s[cnt] != '\0'; cnt++)
{
if (s[cnt] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
wrd++;
}
}

return (wrd);
}
/**
* **strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of strings (Success)
* or NULL (Error)
*/
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, cnt = 0, start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (cnt)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (cnt + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - cnt;
k++;
cnt = 0;
}
}
else if (cnt++ == 0)
start = i;
}

matrix[k] = NULL;

return (matrix);
}
