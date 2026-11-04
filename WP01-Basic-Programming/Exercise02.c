#include <stdio.h>
int main () {
	float a,b,c,d,e,f;
	printf("Enter two real numbers a and b :\n");
	scanf("%f %f" ,&a,&b);
	c=a+b;
	printf("The sum of a and b is :%f\n" , c);
	d=a-b;
	printf("The difference of a and b is :%f\n" , d);
	e=a*b;
	printf("The product of a and b is :%f\n" , e);
	f=a/b;
	printf("The division of a and b is :%f\n" , f);
	return 0;
}
