#include <stdio.h>
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if (sp < MAXVAL)
    {
        val[sp++] = f;
    }
    else
    {
        printf("error: stack full, can't push %d\n", f);
    }
}

double pop(void)
{
    if (sp > 0)
    {
        return val[--sp];
    }
    else
    {
        printf("error: stack empty\n");
        return 0;
    }
}

#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int op2;
    char *p;

    while (p = *++argv)
    {
        if (isdigit(*p))
        {
            push((double)atoi(p));
        }
        else
        {
            switch (*p)
            {
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
                push(pop() / op2);
                break;
            }
        }
    }
    printf("Result of expr: %.2f\n", pop());
    return 0;
}
