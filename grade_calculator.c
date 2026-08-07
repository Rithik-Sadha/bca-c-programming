#include <stdio.h>
int main() {
    int mark;
    printf("Enter student marks (0 to 100): ");
    scanf("%d", &mark);
    if (mark >= 90) {
        printf("Grade: A (outstanding).\n ");
    } else if (mark >= 75) {
        printf("Grade: B (First class).\n ");
    } else if (mark >= 50) {
        printf("Grade; C (Second class).\n ");
    } else {
        printf("Grade: F (Fail).\n ");
    } return 0;
}