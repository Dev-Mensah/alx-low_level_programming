#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main -  main function
* @argc: int
* @argv: int
* Return: result, otherwise
*/

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (EXIT_FAILURE);
}

(void) argc;

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (EXIT_SUCCESS);
}
