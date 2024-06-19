#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, int time) {
    return principal * (pow((1 + rate / 100), time)) - principal;
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
    printf("Compound Interest = %.2f\n", calculateCompoundInterest(principal, rate, time));
    return 0;
}

