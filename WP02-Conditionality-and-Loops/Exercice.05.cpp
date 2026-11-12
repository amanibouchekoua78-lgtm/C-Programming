#include <stdio.h>
int main () {
	int N;
	
	printf("welcome to Positive and Even Number program ! \n");
    do {
    	printf("Enter a positive and an even number N :\n");
    	scanf("%d" ,&N);
	} while (N<=0 || N % 2!=0);
	printf("valid value N = %d\n",N);

	return 0;
}
