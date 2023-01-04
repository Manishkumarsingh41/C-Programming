#include <stdio.h>

int main(void) {
  int marks;

  printf("Enter your marks: ");
  scanf("%d", &marks);

  if (marks >= 90 && marks <= 100) {
    printf("You have received an A+ grade.\n");
  } else if (marks >= 80 && marks <= 89) {
    printf("You have received an A grade.\n");
  } else if (marks >= 70 && marks <= 79) {
    printf("You have received a B grade.\n");
  } else if (marks >= 60 && marks <= 69) {
    printf("You have received a C grade.\n");
  } else if (marks >= 50 && marks <= 59) {
    printf("You have received a D grade.\n");
  } else {
    printf("You have failed.\n");
  }

  return 0;
}
