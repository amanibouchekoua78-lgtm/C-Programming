#include <stdio.h>
int main () {
	float N ;
	printf(" welcome to sign of a number program \n");
	printf("Enter a number N:\n");
	scanf("%f" ,&N);
	
	if (N>0) {
		printf("The number %f is a positive number \n",N);
	} else if (N<0){
		printf("The number %f is a negative number \n",N);
	}
	else {
		printf("Zero ! \n");
	}
	return 0;
	
	}
