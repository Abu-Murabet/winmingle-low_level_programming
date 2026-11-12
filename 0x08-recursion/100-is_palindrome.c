#include <stdio.h>
#include "main.h"


/** Writing  a function that returns 1 if the string is a palindrome, otherwise return 0
 * int : the funtion returns an integer
 * is_palindrome() : the name of the function
 * @char *s : pointing to the first character of the string
 *
 */

/** INTRODUCING helper function **/
int check_palindrome(char *s, int start, int end)
/** @*s: the string we are checking
  * start: the index of the character at the begining
  * end : the index of the character at the end
  */
{
    if(start >= end)
    {
        return(1);
    }

    if(s[start] != s[end])
    {
        return(0);
    }
    else
    {
        return(check_palindrome(s, start + 1, end - 1));
    }
}

int is_palindrome(char *s)
{
    int lenght = 0;

    while(s[lenght] != '\0')
    {
        lenght++;
    }
        return(check_palindrome(s, 0, lenght - 1));
} 
