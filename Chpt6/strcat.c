#include <stdio.h>

void custom_strcat(char *s, char *p)
{
    while (*s != '\0')
    {
        s++;
    }

    while ((*s++ = *p++))
        ;
}

int main()
{
    char a[] = "abcde";
    char b[] = "efg";
    custom_strcat(a, b);
    printf("%s\n", a);
}
