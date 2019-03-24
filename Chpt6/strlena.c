#include <stdio.h>

int strlena(char *s)
{
    char *p = s;
    while (*p != '\0')
        p++;
    return p - s;
}


int main() {
    char amessage[] = "now is the time"; 
    return strlena(amessage);
}

