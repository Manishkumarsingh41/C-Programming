#include <stdio.h>

int main(void) {
    int rows = 10;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
