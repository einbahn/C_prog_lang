#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

int main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 == 0.0)
                    printf("error: zero divisor\n");
                else 
                    push(pop() / op2);
                break;
            case '%':
                op2 = pop();
                if (op2 == 0.0)
                    printf("error: modulo by zero\n");
                else
                    push((int)pop() % (int)op2);
            case 10:
                printf("\t%.8g\n", pop());
            default:
                printf("error: unknown command%s\n", s);
        }
    }
    return 0;
}

#define MAXVAL 100 

int sp = 0;             /* next free stack position */
double val[MAXVAL];     /* value stack */

void push(double f)
{
    if (sp < MAXVAL)
    {
        val[sp++] = f;
    } else {
        printf("error: stack full, can't push %g\n", f);
    }
}

double pop(void)
{
    if (sp > 0)
    {
        return val[--sp];
    } else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

#include <ctype.h>

int getch(void);
void ungetch(int);

int getop(char s[])
{
    int i, c, nc;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.' && c != '-')
       return c; 
  
    i = 0;
    if (c == '-')
    {
        if (isdigit(nc = getch()))
        {
            s[++i] = '-';
            ungetch(nc); 
        } else 
            {
            return c;
            }
    }
    
    if (c == '-' || isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

#define BUFSIZE 100 

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else 
        buf[bufp++] = c;
}