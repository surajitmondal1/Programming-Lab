#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    double principal, rate, time, compoundInterest, amount;
    int n;  // number of times interest applied per year

    // Input values
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Annual Interest Rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate amount using formula: A = P * (1 + r/n)^(n*t)
    amount = principal * pow((1 + (rate / (100 * n))), n * time);

    // Compound Interest = Amount - Principal
    compoundInterest = amount - principal;

    // Display result
    printf("\nCompound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}