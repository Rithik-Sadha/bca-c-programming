#include <stdio.h>
int main() {
    int target = 500;
    int today_earned;
    printf("Enter the amount you earned today: ");
    scanf("%d", &today_earned);
    if (today_earned >= target) {
        printf("Great job! you met your daily goal of your %d.\n", target);
        } else {
         int remaining = target - today_earned;
         printf("You missed the daily goal by %d. keep pushing tomorrow!\n", remaining);
        }
         return 0;
}