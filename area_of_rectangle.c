#include <stdio.h>

int main()
{
    int length, breadth;
    printf("What is the length of your rectangle\n");
    scanf("%d", &length);

    printf("What is the breadth of your rectangle\n");
    scanf("%d", &breadth);

    printf("The area of your ractangle is %d", length*breadth);
    return 0;
}
