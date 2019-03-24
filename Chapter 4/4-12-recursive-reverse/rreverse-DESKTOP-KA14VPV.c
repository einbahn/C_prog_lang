#include <string.h>

void reverse(char s[], int i, int j)
{
    int c;
    if (i > j)
    {
        return;
    } else {
        s[j] = c;
        s[j] = s[i];
        s[i] = c;
        reverse(s, ++i, --j);
    }
}

int main(){
    int i, j;
    char s[] = "abcdefg";
    i = 0;
    j = strlen(s);
    reverse(s, i, j);
}