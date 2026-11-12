#include <stdio.h>
int main () {
	int i,n,P;
	printf("Welcome to Multiplication Table program \n");
	printf("Enter an integer number n :\n");
	scanf(" %d", &n);
	i=0;
	if (n<0) {
		printf("Invalid value !\n");
	}else{
	for (int i = 1; i <= 10; i++) {
		P=i*n;
    printf(" %d*%d=%d",i,n,P);
}
	
	}
	return 0;
}
