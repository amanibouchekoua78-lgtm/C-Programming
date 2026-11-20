#include <stdio.h>
int main (){
	int N,j,i;
	float P;   	
	printf("Welcome to the Sort an Array into a Second Array program!\n");
	printf("Enter size of array A :\n");
	scanf("%d",&N);
	if (N <= 0) {
    printf("Invalid size!");
}
    float A [N],B [N];
	printf("Enter elements of array A :\n");
	for (i=0 ;i<N;i++) {
		printf("A[%d]=",i);
		scanf("%f",&A[i]);
	}
	for(i=0;i<N;i++){
	B[i]=A[i];	
	}
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (B[i] > B[j]) {
                P = B[i];
                B[i] = B[j];
                B[j] = P;
            }
        }
    }
    printf(" The original array A:\n");
    for (i = 0; i < N; i++) {
        printf("%f\n", A[i]);
    }

    printf("The sorted array B:\n");
    for (i = 0; i < N; i++) {
        printf("%f\n", B[i]);
    }
	return 0;
}
