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
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
