#include <stdio.h>

int main() {
   float percentage;
   int total_marks,scored_marks ;
   printf("What is total marks\n");
    scanf("%d", &total_marks);

    printf("Your total  marks \n");
    scanf("%d", &scored_marks);

   percentage = scored_marks * 100.0/ total_marks;

   printf("Your percentage = %.2f%%", percentage);

   return 0;
}