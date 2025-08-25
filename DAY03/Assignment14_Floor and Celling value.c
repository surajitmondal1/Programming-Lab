#include <stdio.h>
#include <math.h>   // for floor() and ceil()

int main() {
    double num;

    // Input a number
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);

    // Calculate floor and ceiling
    double f = floor(num);
    double c = ceil(num);

    // Display results
    printf("\nNumber entered: %.2lf\n", num);
    printf("Floor value   = %.2lf\n", f);
    printf("Ceiling value = %.2lf\n", c);

    return 0;
}