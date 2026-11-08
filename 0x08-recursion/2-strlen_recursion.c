#include <stdio.h>
#include "main.h"

/**
 * Writing a recursive function that print a string in reverse
 * int : the function returns an integer
 * char *s: a pointer to the first character of the string
 * _strlen_recursion() : the name of the function
 *
**/


int _strlen_recursion(char *s)
{
    if(*s == '\0')
    {
        return(0);
        _putchar('\n');
    }
    else
        {
            return (1 + ( _strlen_recursion(s + 1)));
        }
}
