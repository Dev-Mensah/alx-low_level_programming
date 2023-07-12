#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main -  main function
* @argc: int
* @argv: array
* Return: result, otherwise
*/

int main(int argc, char *argv[])
{
int minim, k;
unsigned int i;
char *arg;
int cents[] = {25, 10, 5, 2};

if (argc != 2)
{
printf("Error\n");
return (EXIT_FAILURE);
}

minim = strtol(argv[1], &arg, 10);
k = 0;

if (!*arg)
{
while (minim > 1)
{
for (i = 0; i < sizeof(cents[i]); i++)
{
if (minim >= cents[i])
{
k += minim / cents[i];
minim %= cents[i];
}
}
}
if (minim == 1)
k++;
}
else
{
printf("Error\n");
return (EXIT_FAILURE);
}

printf("%d\n", k);

return (EXIT_SUCCESS);
}
