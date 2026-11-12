#include <stdio.h>
int main (){
	int sum=0,digit,n;
	printf("Welcome to Sum of Digits program \n");
	printf("Enter a positive integer number n :\n");
	scanf(" %d", &n);
	if (n<=0) {
		printf("Invalid value \n");
	}else { 
	while (n>0) {
	digit = n % 10;
    sum=sum+digit;
	n = n / 10;	
	} 
	   printf("The sum of digits is: %d\n", sum);
	}
	
	return 0;
}
