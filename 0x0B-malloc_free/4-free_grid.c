#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid -  create array
* @grid: int
* @height: int
* Return: result, otherwise
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
