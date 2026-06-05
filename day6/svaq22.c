#include <stdio.h>
#include <math.h>

int main() {
    long bin, dec = 0, rem, base = 1;

    printf("Enter binary number: ");
    scanf("%lld", &bin);

    while(bin > 0) {
        rem = bin % 10; // get last digit: 0 or 1
        dec = dec + rem * base; // add digit * 2^position
        bin = bin / 10; // remove last digit
        base = base * 2; // move to next power of 2
    }

    printf("Decimal: %lld\n", dec);
    return 0;
}
