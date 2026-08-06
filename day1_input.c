#include <stdio.h>
int main() {
    int day;
    int goal;
    printf("Enter current day: ");
    scanf("%d", &day);
    printf("Enter monthly goal: ");
    scanf("%d", &goal);
    printf("\n--- progress summary ---\n");
printf("Day %d of my journey to earn %d per montly!\n", day, goal);
return 0;
}