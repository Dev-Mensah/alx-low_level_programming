#include <stdio.h>
#include "main.h"

/**
* times_table - Prints the 9 times table.
*/
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (i * j <= 9)
{
printf("%2d", i * j);
}
else
{
printf(i * j);
}

if (j != 9)
{
printf(", ");
}
}
printf("\n");
}
}
