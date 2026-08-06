#include <stdio.h>
int main() {
    int monthly_goal;
    int days_in_month = 30;
    int daily_target;
    printf("enter your monthly earning goal: ");
    scanf("%d", &monthly_goal);
    daily_target = monthly_goal / days_in_month;
    printf("To reach %d in a month, your daily target is: %d\n", monthly_goal, daily_target);
    return 0;
}