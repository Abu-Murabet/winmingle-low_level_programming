#include <stdio.h>
#include "main.h"

/**
 * Writing a recursive function that print a string in reverse
 * void: the function returns nothing
 * char *s: a pointer to the first character of the string
 * _print_rev_recursion() : the name of the function
 *
**/


void _print_rev_recursion(char *s)
{
    if(*s == '\0')
    {
        return;
        _putchar('\n');
    }
    _print_rev_recursion(s + 1);
    _putchar(*s);
}
