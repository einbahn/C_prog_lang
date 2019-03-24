/* Exercise 3-2 Write a function escape(s, t) that converts characters like newline and tab into visible escape sequences like  \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape sequences into the real characters. */ 
#include <stdio.h>

int count_spec(char s[])
{
    int i, spec, normal; 
    i = spec = normal = 0;
    while (s[i] != '\0')
    {
        // char c = s[i++];
        switch ((char)s[i++]) 
        {
            case '\t':
            case '\n':
            case ' ':
                spec++;
                break;
            default:
                normal++;
                break;
        }
    }
    return spec * 2 + normal + 1;
}

int escape(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
    {
            switch (s[i])
            {
                case ' ':
                    t[j++] = '\\';
                    t[j] = 's';
                    i++;
                    j++;
                    break;
                case '\n':
                    t[j++] = '\\';
                    t[j] = 'n';
                    i++;
                    j++;
                    break;
                case '\t':
                    t[j++] = '\\';
                    t[j] = 't';
                    i++;
                    j++;              
                default:
                    t[j++] = s[i++];
                    break;
            }
            t[j] = '\0';
    }
    printf("the content of t is '%s'", t);
    return 0;
}

int main()
{   
    int bufsize;
    char a[] = "this    is  a   string\n"; 
    bufsize = count_spec(a);
    char b[bufsize];
    escape(a, b);
    return 0;

}
