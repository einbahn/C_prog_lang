#include <stdio.h>

int custom_strend(char *s, char *t)
{
        while (*s != *t && *s != '\0')
            s++;
        
        if (*s == '\0') 
        {
            return 0;
        } 
        else 
        {
           while (*s == *t && *s != '\0')
        {
            s++;
            t++;
        }
            if (*t != '\0' || *s != '\0')
                return 0;
            else
                return 1;
            }
        
}

int main()
{
    char *a = "abcde";
    char *b = "bde";
    /* printf("the return value from function is: %d\n", custom_strend(a, b)); */
    printf("The return value from the function is %d\n", custom_strend(a, b));
}