#include <stdio.h>
int main () {
	const float pi=3.14;
	float R,P,S;
	printf("Enter the radius R of the circle :\n");
	scanf("%f",&R);
	P=2*pi*R;
	S=pi*R*R;
	printf("The perimeter of the circle is :%f\n",P);
	printf("The surface of the circle is :%f\n",S);
	return 0;
}

