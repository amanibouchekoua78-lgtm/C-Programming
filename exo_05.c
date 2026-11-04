#include <stdio.h>
int main () {
	const int pen=20;
	int X,Y;
	

	printf("Enter the number of pens you want :\n ");
	scanf("%d",&X);
	if (X<0) {
	printf("invalid value.\n");
	}
	else{
	Y=pen*X;
	printf("The price to be paid is %d DA\n",Y);
}
	return 0;
}

