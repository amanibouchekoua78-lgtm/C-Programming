#include<stdio.h>
int main () {
	int S,i,N,M;

	printf("Welcome to Product Using Only + and - program !\n ");
	printf("Enter two integer numbers N and M :\n");
	scanf("%d %d", &N ,&M);
	S=0;
	if (N<0 || M<0){
		printf("error \n");
	}else{
	for(int i = 0; i < M; i++) {
		S=S+N;
	}
     printf("%d", S);
     
}
	
	return 0;
}
