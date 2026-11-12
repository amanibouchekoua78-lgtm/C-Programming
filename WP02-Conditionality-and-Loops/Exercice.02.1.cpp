#include <stdio.h>
int main () {
	int N;
	printf("Welcome to season from month number program \n");
	printf("Enter the number of the month N :\n");
	scanf("%d",&N);
	if (N<1) {
		printf("invalid value !\n");
	 }else if (N>12) {
	 	printf("invalid value !\n");	
	 }
		
	else {
		switch (N){
			
		    case 12 :
		    case 1 : 
		    case 2 : printf("the season is winter \n"); break;
			case 5 : 
	    	case 3 : 
	    	case 4 : printf("the season is printemps \n"); break;
            case 6 :
	        case 7 :
		    case 8 : printf("the season is summer \n"); break;
		    case 9 :
		    case 10 :
			case 11 : printf("the season is autoumn \n"); break;
		}
	}
	return 0;
}
