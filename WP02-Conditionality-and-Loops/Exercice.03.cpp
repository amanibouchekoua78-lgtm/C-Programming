#include <stdio.h>
int main () {
int n,i;
printf("welcome to print integers numbers program \n");
printf("Enter an integer number n: \n");
scanf("%d" , &n);
if (n<=0) {
	printf("invalid value \n");
}else { 
	printf("the list of numbers is:\n");	
for (i=0 ; i<=n; i++) {
	printf("%d\n",i);	
}
}	
return 0;	
}
