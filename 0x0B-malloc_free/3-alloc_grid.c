#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid -  create array
* @width: int
* @height: int
* Return: result, otherwise
*/

int **alloc_grid(int width, int height)
{
int **ptr;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

ptr = malloc(sizeof(int *) * height);

if (ptr == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
ptr[x] = malloc(sizeof(int) * width);

if (ptr[x] == NULL)
{
for (; x >= 0; x--)
free(ptr[x]);

free(ptr);
return (NULL);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
ptr[x][y] = 0;
}

return (ptr);
}
