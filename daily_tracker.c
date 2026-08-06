#include <stdio.h>
int main() {
    int target;
    int actual_earnings;
    printf("Enter the target: ");
    scanf("%d", &target);
    printf("Enter the actual_earnings: ");
    scanf("%d", &actual_earnings);
    if (actual_earnings >= target) {
        int extra = actual_earnings - target;
        printf("Target reached! you earned %d extra.\n", extra);
    } else { 
        int remaining = target - actual_earnings;
        printf("Target missed! you are short by %d.\n", remaining);
    } return 0 ;
}