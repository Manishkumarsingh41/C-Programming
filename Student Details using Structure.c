#include <stdio.h>

struct Student {
  int roll_no;
  char name[50];
  float marks;
};

int main() {
  struct Student student;

  printf("Enter student details:\n");
  printf("Enter roll number: ");
  scanf("%d", &student.roll_no);
  printf("Enter name: ");
  scanf("%s", student.name);
  printf("Enter marks: ");
  scanf("%f", &student.marks);

  printf("\nStudent Details:");
  printf("\nRoll number: %d", student.roll_no);
  printf("\nName: %s", student.name);
  printf("\nMarks: %.2f", student.marks);

  return 0;
}
