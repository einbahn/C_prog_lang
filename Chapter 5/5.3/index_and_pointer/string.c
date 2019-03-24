#include <stdio.h>

int sub_b(char *s)
{
    char c;
    c = 'j';
    while (*s != 'b')
      s++;
    *s = c;
}

int main(){
    char a[] = "abbcde";
    sub_b(a);
    printf("%s\n", a);
}
