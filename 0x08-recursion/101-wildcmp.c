#include <stdio.h>
#include "main.h"

/** a function that compares two strings and return 1 if they are considred identical, otherwise return 0
 * wildcmp() : the function name. it compares two strungs character by character but one of th string s2 may contain * special character *.
 * @s1: the first string
 * @s2: the second string that contains special character *
 *
**/
int wildcmp(char *s1, char *s2)
{
/** if both strings have ended, they are match **/
    if(*s1 == '\0' && *s2 == '\0')
    {
        return(1);
    }
 
 /** if the second string has ended, and the first has not **/
    if(*s2 == '\0')
    {
        return(0);
    }
    
    if(*s2 == '*')
    {
        if(wildcmp(s1, s2 + 1))
        {
            return(1);
        }    
    
        else if(*s1 != '\0')
        {
           return(wildcmp(s1 + 1, s2));
        }
        else
        {
            return(0);
        }
     }   
    

/** The normal recursive case **/
    if(*s1 == *s2)
    {
        return wildcmp(s1 + 1, s2 + 1);
    }
    else
    {
        return(0);
    }
    
}
