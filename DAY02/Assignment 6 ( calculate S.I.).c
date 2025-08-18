#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input principal, rate and time
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Formula: SI = (P × R × T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Display result
    printf("\nSimple Interest = %.2f\n", simpleInterest);

    return 0;
}