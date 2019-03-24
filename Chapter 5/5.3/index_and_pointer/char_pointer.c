#include <stdio.h>

int main()
{
    int c;
    char *p = "abcde";
    printf("pointer: %s\n", p);
    char m[] = "bcdef";
    p = &m[0];
    printf("array: %s\n", p);
    
/* 
    while (*p != '\0')
       { c = (int)*p++;
        putchar(c); } */
}

void sub_str(char *s)
{
    while (*s++ != 'b')
        s++;
    *s = 'j';
}