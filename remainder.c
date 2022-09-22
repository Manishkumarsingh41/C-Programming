#include<stdio.h>
#include<math.h>
int main (){
   int a,b;
   printf("Enter your first number a:\n");
   scanf("%d", &a);

   printf("Enter your second number b:\n");
   scanf("%d", &b);

   printf("Divisibality test return: %d\n",a % b);

    return 0;
}