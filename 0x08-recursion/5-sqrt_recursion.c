#include <stdio.h>
#include "main.h"

/**
 * Finding the sqrt of a number recursively, we need a helper function that takes two parameters because sqrt n is when a number multiplied by itself. So, we are introducing a helper function find_sqrt().
 * int find_sqrt() : the function's name
 * int n: the number we are finding its sqrt
 * int guess: the integer number we are using rto test
**/

int find_sqrt(int n, int guess)
{
    if(guess * guess == n)
    {
        return(guess);
    }
    if(guess * guess > n)
    {
        return(-1);
    }
    else
    {
        return(find_sqrt(n, guess + 1));
    }

}

/**
 * Writing a recursive function that returns the natural square root of a number
 * int : the function returns an integer
 * int n : the integer number which we want to find its square root
 * _sqrt_recursion() : the name of the function
 *
**/

int _sqrt_recursion(int n)
{
    if(n < 0)
    {
        return(-1);
    }
    if(n == 0)
    {
        return(0);
    }
    else
    {
        return(find_sqrt(n, 1));
    }

}
