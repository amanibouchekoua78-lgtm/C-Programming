#include <stdio.h>
int main () {
	int N;
	printf("Welcome to season from month number program \n");
	printf("Enter the number of the month N :\n");
	scanf("%d",&N);
	if (N<1) {
		printf("invalid value !\n");
		} else if (N>12){
		printf("invalid value !\n");
		} else if (N==12 || N==1 || N==2) {
			printf("winter \n");
		}else if (N==3 || N==4 || N==5) {
			printf("printemps \n");
		}else if (N==6 || N==7 || N==8) {
			printf("summer \n");
		}else {
			printf("automn \n");
		}
		return 0;
		}
		
