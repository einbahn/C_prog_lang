#include <stdio.h>

int power(int base, int n)
{
    int p;
    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}

int main() {
    int b; 
    int n;
    int result;
    b = 2;
    n = 3; 

    result = power(b, n);
    printf("Result is %d\nn is %d\n", result, n);
}