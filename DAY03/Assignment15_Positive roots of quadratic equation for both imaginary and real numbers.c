#include <stdio.h>
#include <math.h>   // for sqrt()

int main() {
    double a, b, c, discriminant, realPart, imaginaryPart, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        // Two equal real roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
    }
    else {
        // Complex (imaginary) roots
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are imaginary (complex):\n");
        printf("Root1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}