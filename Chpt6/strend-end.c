#include <stdio.h>

int custom_strend(char *s, char *p)
{
    while (*s != '\0')
    {
        s++;
    }

    while (*p != '\0')
    {
        p++;
    }

    while (*s-- == *p--)
        ;
    if (*p == '\0')
        return 1;
    else 
        return 0;
}

int seekbegin(char *p)
{
    --*p;
    if (*p == '\0')
        return 1;
    else
    {
        return 0;
    }
    
}

int main(){
    char *p = "abcde";
    char *s = "dce";
    printf("the char before the beginning of array is: %d\n", seekbegin(p));
}