#include <stdio.h>
#include "main.h"

/**
 * Writing a recursive function that returns the value of x raised to the power of power of y.
 * int : the function returns an integer
 * int x : the integer value of x
 * int y : the integer power of y
 * _pow_recursion() : the name of the function
 *
**/


int _pow_recursion(int x, int y)
{
    if(y == 0)
    {
        return(1);
    }

    if(y < 0)
    {
        return(-1);
    }

    return x *  _pow_recursion(x, y-1);
}
