#include <stdio.h>

char * custom_strcat(char *s, char *p)
{
    while (*s != '\0')
    {
        s++;
    }

    while ((*s++ = *p++))
        ;
}

void main()
{
    char *a = "abcde";
    char *b = "efg";
    printf("%s\n", custom_strcat(a, b));
}
