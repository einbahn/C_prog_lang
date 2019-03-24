#include <stdio.h>
#include <string.h>

void reverse(char s[], int i, int j)
{
    int c;

    if (i > j)
    {
        return;
    } else {
        c = s[j];
        s[j] = s[i];
        s[i] = c;
        reverse(s, ++i, --j);
    }
}

int main()
{
    char s[] = "abcde";
    int i = 0;
    int j = strlen(s) - 1;
    reverse(s, i, j);
    printf("%s\n", s);
}