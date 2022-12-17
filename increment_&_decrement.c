// Program to difference between post increment and post decrement & pre increment and pre decrement.
#include <stdio.h>

void main()
{

    int a = 5;
    int b = 0;

    b = a++;
    printf("%d\t", b);
    printf("%d\t", a);

    b = ++a;
    printf("%d\t", b);
    printf("%d\t", a);

    b = a--;
    printf("%d\t", b);
    printf("%d\t", a);

    b = --a;
    printf("%d\t", b);
    printf("%d\t", a);
}