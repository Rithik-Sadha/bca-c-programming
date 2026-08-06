#include <stdio.h>
int main() {
    int required_percentage;
    int actual_percentage;
    printf("Enter minimum required percentage: ");
scanf("%d", &required_percentage);
printf("Enter student's actual percentage: ");
scanf("%d", &actual_percentage);
if (actual_percentage >= required_percentage) {
int extra_percentage = actual_percentage - required_percentage;
printf("Eligible for exam! you have %d%% extra.\n", extra_percentage);
} else { 
 int short_percentage = required_percentage - actual_percentage;
printf("Not eligible for exam! you are short by %d%% attendance.\n", short_percentage);
}
return 0;
}