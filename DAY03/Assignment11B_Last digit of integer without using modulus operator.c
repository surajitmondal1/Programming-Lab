#include <stdio.h>

int main() {
    int num, lastDigit;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Find last digit without modulus
    lastDigit = num - (num / 10) * 10;

    // Handle negative numbers (optional)
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }

    // Display result
    printf("The last digit of %d is %d\n", num, lastDigit);

    return 0;
}