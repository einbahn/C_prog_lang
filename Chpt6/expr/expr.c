#include <stdio.h>
#define MAXVAL 100

int sp = 0;
int val[MAXVAL];

void push(int f)
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

int pop(void)
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

    while (argc-- >= 0 && (p = *++argv))
    {
        if (isdigit(*p))
        {
            push(atoi(p));
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
    printf("Result of expr: %d\n", pop());
    return 0;
}
