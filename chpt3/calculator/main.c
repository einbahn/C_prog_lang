#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#define MAXOP 100

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