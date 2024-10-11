#include <stdio.h>
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
void print_fibonacci(int n) {
    int a = 0, b = 1, t;
    printf("Series is: ");
    for (int j = 1; j <= n; j++) {
        printf("%d ", a);
        t = a + b;
        a = b;
        b = t;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    print_fibonacci(n);

    return 0;
}


