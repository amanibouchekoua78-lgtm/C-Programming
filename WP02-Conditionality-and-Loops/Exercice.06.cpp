#include <stdio.h>

int main() {
    int n, i;

    printf("Welcome to Prime Number program !\n");
    scanf("%d", &n);

    if (n < 2) {
        printf("Not a prime number !\n");
    } 
    else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                break;
            }
        }

        if (i == n) {
            printf("%d is a prime number\n", n);
        } 
        else {
            printf("%d is not a prime number\n", n);
        }
    }

    return 0;
}
