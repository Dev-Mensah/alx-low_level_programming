#include "main.h"
#include <stdio.h>

/**
* swap_int - swap integer
* @a: interger
* @b: interger
* _putchar: result, otherwise
*/

void swap_int(int *a, int *b)
{
int i = *a;
*a = *b;
*b = i;
}
