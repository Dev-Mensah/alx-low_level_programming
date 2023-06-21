/*
 * File: 3-islower.c
 */

#include "main.h"

/**
 * _islower - print lowercase
 * @c: the number to be printed
 * return: 0
 * _islower - return: 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar(1);
}
else
{
_putchar(0);
}
}
