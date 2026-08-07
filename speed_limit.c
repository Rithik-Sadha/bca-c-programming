#include <stdio.h>
int main() {
    int speed;
    printf("Enter the  speed (0 to 100): ");
    scanf("%d", &speed);
    if (speed > 100) {
        printf("Licence Suspended! Extreme overspeeding.\n");
    } else if (speed > 70) {
        printf("Fine Issued! Overspeeding.\n");
    } else if (speed >= 30) {
        printf("Normal Driving. Have a safe journey!.\n");
    } else {
        printf("Too slow! Impending traffic.\n");
    } return 0;
}