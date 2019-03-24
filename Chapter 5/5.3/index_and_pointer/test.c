
#include <stdio.h>


int main()
{
char a[] = "abcde";

char s = a[1];
char j = *(a + 1);
char *p;
p = a;


printf("a = %s\n", a);
putchar(s);
putchar(j);
putchar(p[2]);
}



