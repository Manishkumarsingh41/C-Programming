#include <stdio.h>
#include <math.h>

int main() {
   double s; // length of a side of the pentagon
   double area; // area of the pentagon

   printf("Enter the length of a side of the pentagon: ");
   scanf("%lf", &s);

   area = (5 * s * s) / (4 * tan(M_PI / 5));
   printf("The area of the pentagon is: %.2lf\n", area);

   return 0;
}