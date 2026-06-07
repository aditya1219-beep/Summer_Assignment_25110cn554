// rev stores reversed number, pass by reference so it keeps value across calls
void reverse(int n, int *rev) {
    // base case: if no digits left
    if(n == 0) {
        return;
    }
    // take last digit and add to rev
    *rev = *rev * 10 + n % 10;
    reverse(n / 10, rev); // recursive call with remaining digits
}

int main() {
    int num, rev = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    if(temp < 0) temp = -temp; // handle negative

    reverse(temp, &rev);

    if(num < 0) rev = -rev; // add sign back
    
    printf("Reverse = %d\n", rev);
    return 0;
}
