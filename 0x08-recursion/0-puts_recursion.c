#include <stdio.h>
#include "main.h"

/**
 * Writing a recursive function that print a string 
 * void: the function returns nothing
 * char *s: a pointer to the first character of the string
 * _puts_recursion() : the name of the function
 *
**/


void _puts_recursion(char *s)
{
    if(*s == '\0')
    {
        return;
        _putchar('\n');
    }

    _putchar(*s);
    _puts_recursion(s + 1);
}
