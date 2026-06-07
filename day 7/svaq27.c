#include <stdio.h>

int sumDigits(int n) {
    // base case: if single digit, return it
    if(n == 0) {
        return 0;
    }
    // recursive case: last digit + sum of rest
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // handle negative numbers
    if(num < 0) num = -num;

    printf("Sum of digits = %d\n", sumDigits(num));
    return 0;
}
