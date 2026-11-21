
#include <stdio.h>
int main() {
    int N,i,j,choice,found,P,left,right,mid;
    printf("Welcome to the Search for the Element 3 (By three Methods) program!\n");
    printf("Enter size of array A:\n");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Invalid size!");
    }
    int A[N];
    printf("Enter elements of array A:\n");
    for (i = 0; i < N; i++) {
        printf("A[%d]=", i);
        scanf("%d", &A[i]);
    }
    printf("Choose the search method:\n" "1. Linear Search\n" "2. Sorted Array Search\n" "3. Binary Search\n");
    printf("Enter the number of your method choice:\n");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Linear Search\n");
        found = 0;
        for (i = 0; i < N; i++) {
            if (A[i] == 3) {
                printf("Element 3 found at position %d\n", i + 1);
                found = 1;
            }
        }

        if (found == 0) {
            printf("Element 3 not found\n");
        }
    }

    else if (choice == 2) {
        printf("Sorted Array Search\n");
        for (i = 0; i < N - 1; i++) {
            for (j = i + 1; j < N; j++) {
                if (A[i] > A[j]) {
                    P = A[i];
                    A[i] = A[j];
                    A[j] = P;
                }
            }
        }
        found = 0;
        for (i = 0; i < N; i++) {
            if (A[i] == 3) {
                printf("Element 3 found at position %d\n", i + 1);
                found = 1;
                break;
            }
            else if (A[i] > 3) {
                break;
            }
        }
        if (found == 0) {
            printf("Element 3 not found\n");
        }
    }
    else if (choice == 3) {
        printf("Binary Search\n");
        for (i = 0; i < N - 1; i++) {
            for (j = i + 1; j < N; j++) {
                if (A[i] > A[j]) {
                    P = A[i];
                    A[i] = A[j];
                    A[j] = P;
                }
            }
        }
        left = 0;
        right = N - 1;
        found = 0;
        while (left <= right) {
            mid = (left + right) / 2;
            if (A[mid] == 3) {
                printf("Element 3 found at position %d\n", mid + 1);
                found = 1;
                break;
            }
            else if (A[mid] > 3) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        if (found == 0) {
            printf("Element 3 not found\n");
        }
    }
    else {
        printf("Error! Invalid choice.\n");
    }
    return 0;
}

