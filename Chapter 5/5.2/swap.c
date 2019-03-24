#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b; 
    a = 4; 
    b = 5;
    printf("a is %d, b is %d\n", a, b);
    swap(&a, &b);
    printf("after swap, a is %d, b is %d\n", a, b);
}

