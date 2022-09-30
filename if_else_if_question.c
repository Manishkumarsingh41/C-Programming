#include <stdio.h>

int main() {
  int code;
  printf("Enter your branch Code (Ex:- 0-CSE,1-IT,2-MECH,3-CIVIL,4-CHEM)\n");
  scanf("%d",&code);
  
  if (code==0)
  {
    printf("Congratulation!!!, you have been alloted (CSE) branch");
  }else if (code==1)
  {
    printf("Congratulation!!!, you have been alloted (IT) branch");
  }else if (code==2)
  {
    printf("Congratulation!!!, you have been alloted (MECH) branch");
  }else if (code==3)
  {
    printf("Congratulation!!!, you have been alloted (CIVIL) branch");
  }else if (code==4)
  {
    printf("Congratulation!!!, you have been alloted (CHEM) branch");
  }else 
  {
    printf("invalid code! please try again");
  }
  
   return 0;
}