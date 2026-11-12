#include <stdio.h>
int main () {
	int X,Y,Z;

	printf("Welcome to Largest of Three Numbers program \n");
	printf("Enter Three integer numbers X,Y,Z :\n");
	scanf(" %d %d %d",&X,&Y,&Z);
	if(X<0 || Y<0 || Z<0) {
		printf("Invalid value ! \n");
	}else{
		if (X>Y && X>Z){
		
		printf("%d is the largest number \n",X); 
	}if (Y>Z && Y>X) {
	    printf("%d is the largest number \n",Y);	
	} if (Z>X && Z>Y) {
		printf("%d is the largest number \n",Z);	
	}
	}
	return 0;
}
