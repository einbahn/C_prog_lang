#include <stdio.h>

int lenstr(char *s)
{
	int n;
    for (n = 0; *s != '\0'; s++)
     {
     	n++;
     }
	return n;
}

int strdiff(char *s, char *p) {
    int i;
    for (i = 0; s[i] == p[i]; i++)
    {
        if (s[i] == '\0')
            return 0;
    }
        return s[i] - p[i]; 
}

int main(){

char a[] = "abcdefg";

char *p = "abcde";

printf("The length of the string is: %d\n", lenstr(p));

printf("The length difference is: %d\n", strdiff(a, p));

}


