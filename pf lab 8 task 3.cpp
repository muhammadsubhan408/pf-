#include <stdio.h>

int main() {
    int n, i, j, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (spaces = 0; spaces < i; spaces++) {
            printf(" ");
        }
        for (j = n - i; j >= 1; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    for (i = n - 2; i >= 0; i--) {
        for (spaces = 0; spaces < i; spaces++) {
            printf(" ");
        }
        for (j = n - i; j >= 1; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}
