#include <stdio.h>

int main() {
    float num1, num2, c;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Before swapping: num1 = %.2f, num2 = %.2f\n", num1, num2);

    // Swapping using a third variable 'c'
    c = num1;
    num1 = num2;
    num2 = c;

    printf("After swapping: num1 = %.2f, num2 = %.2f\n", num1, num2);

    return 0;
}