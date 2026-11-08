#include <stdio.h>
#include "main.h"

/**
 * Writing a recursive function that returns the factorial of a given number
 * int : the function returns an integer
 * int n : the integer value of the factorial
 * factorial() : the name of the function
 *
**/


int factorial(int n)
{
    if(n <= 1)
    {
        return(1);
    }
    else
        {
             return n * factorial(n - 1);
        }
}
