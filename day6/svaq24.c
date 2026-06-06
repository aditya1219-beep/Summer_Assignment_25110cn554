#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exp, abs_exp;

    // User input
    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exp);

    // Use absolute value of exponent for the multiplication loop
    abs_exp = (exp < 0) ? -exp : exp;

    // Loop to multiply the base sequentially
    for (int i = 0; i < abs_exp; i++) {
        result *= base;
    }

    // If exponent is negative, invert the final result
    if (exp < 0) {
        result = 1.0 / result;
    }

    // Print result with 4 decimal places
    printf("%.4lf raised to the power of %d is: %.4lf\n", base, exp, result);

    return 0;
}
