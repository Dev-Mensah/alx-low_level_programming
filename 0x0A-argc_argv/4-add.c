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
int i, sum;
int num;
char *arg;

sum = 0;

if (argc > 1)
{
for (i = 1; argv[i]; i++)
{
num = strtol(argv[i], &arg, 10);
if (!*arg)
sum += num;
else
{
printf("Error\n");
return (EXIT_FAILURE);
}
}
}
printf("%d\n", sum);

return (EXIT_SUCCESS);
}
