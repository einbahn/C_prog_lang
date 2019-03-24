#include <stdio.h>

int custom_strend(char *s, char *t)
{
        while (*s != *t && *s != '\0')
            s++;
        
        if (*s == '\0') 
        {
            return 0;
        } 
       
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

int main()
{
    char *a = "bde";
    char *b = "bde";
    /* printf("the return value from function is: %d\n", custom_strend(a, b)); */
    printf("'bde, 'bde' = %d\n", custom_strend(a, b));

    char *c = "this is a great day";
    char *d = "great day";
    /* printf("the return value from function is: %d\n", custom_strend(a, b)); */
    printf("'this is a great day' 'great day' = %d\n", custom_strend(c, d));

    char *f = "terrible result";
    char *g = "whatever that means";
    /* printf("the return value from function is: %d\n", custom_strend(a, b)); */
    printf("'terrible result' 'whatever that means' = %d\n", custom_strend(f, g));
}