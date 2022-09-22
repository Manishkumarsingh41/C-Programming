#include <stdio.h>
int main()
{
    int radius;
    float pai = 3.14;
    printf("What is the radius of your circle\n");
    scanf("%d", &radius);

    printf("The area of your circle is %f", pai*pow(radius,2));
    return 0;
}