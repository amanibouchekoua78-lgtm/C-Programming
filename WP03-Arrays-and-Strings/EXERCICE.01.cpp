#include <stdio.h>
int main (){
	int B[5], C1[5], C2[5], C4[5], C5 [5];
	int A [5] = {0,1,2,3,4};
	int C3=0;
	int i;
	printf("Welcome to the Operations on Two 1D Arrays program !\n");
	printf("Enter five element of array B :\n");
	for (i=0 ;i<5;i++) {
		printf("B[%d]=",i);
		scanf("%d",&B[i]);
	}
	for (i=0;i<5;i++){
	C1[i]=A[i]+B[i];
	C2[i]=A[i]-B[i];
	C3=C3+A[i]*B[i];
	if (B[i]!= 0){
	C4[i]=A[i]/B[i];
	C5[i]=A[i]%B[i];
}else{
	C4[i]=0;
	C5[i]=0;
	printf("Division by zero at index %d\n",i);
}
}
printf("addition of A and B :\n");

    for (i = 0; i < 5; i++){
printf("%d\n",C1[i]);
}
printf("the difference of A and B :\n");
for(i=0;i<5;i++){
printf("%d\n",C2[i]);	
}
printf("the scalar product of A and B :\n");	
printf("%d\n\n", C3);
printf("the division of A by B :\n");
for(i=0;i<5;i++){
printf("%d\n",C4[i]);	
}
printf("the modulo of A by B :\n");
for(i=0;i<5;i++){
printf("%d\n",C5[i]);	
	
}
return 0;
}
