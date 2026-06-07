long long factorial(int n) {
    // base case: stop recursion here
    if(n == 0 || n == 1) {
        return 1;
    }
    // recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }
    return 0;
}
