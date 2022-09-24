#include <stdio.h>
int main()
{
    int celcius;
    float a = 1.8;
    char b = 32;
    printf("Enter the value of celcius\n");
    scanf("%d", &celcius);

    printf("Your ferenheit temperature is %f", ((a*celcius)+b));
    return 0;
}