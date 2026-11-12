#include <stdio.h>

int main() {
    int n;

    printf("Welcome to Count Down to Zero program\n");
    printf("Enter a positive integer number n:\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error!\n");
    }
    else {
        while (n >= 0) {
            printf("%d ", n);
            n--;
        }

        printf("\nGo!\n");
    }

    return 0;
}

