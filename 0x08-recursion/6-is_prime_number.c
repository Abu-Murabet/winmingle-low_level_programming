#include <stdio.h>
#include "main.h"


/** Writing  a function that rturns 1 if the input integer is a prime number, otherwise return 0
 * int : the funtion returns an integer
 * is_prime_number() : the name of the function
 * @n : the number we are looking for
 *
 */

/** INTRODUCING helper function **/
int check_prime(int n, int divisor)
{
    if(divisor * divisor > n)
    {
        return(1);
    }

    if(n % divisor == 0)
    {
        return(0);
    }
    else
    {
        return(check_prime(n, divisor + 1));
    }
}

int is_prime_number(int n)
{
    if(n < 2)
    {
        return(0);
    }
        return(check_prime(n, 2));
}
