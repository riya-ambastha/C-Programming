#include <stdio.h>

float calculateSimpleInterest(float principal, float rate, int time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate;
    int time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%d", &time);
    printf("Simple Interest = %.2f\n", calculateSimpleInterest(principal, rate, time));
    return 0;
}

