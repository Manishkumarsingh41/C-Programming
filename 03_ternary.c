#include<stdio.h>

int main (){
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    //one liner
    (a < 5) ? printf("A is less then 5"): printf("A is not less then 5");
    return 0;
}