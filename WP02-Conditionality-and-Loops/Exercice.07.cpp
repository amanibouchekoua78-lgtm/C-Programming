#include <stdio.h>
int main (){
	char c;
	printf("Welcome to Repeat Until Character is different from * program \n ");
	do{
	 printf("Enter character \n");
	 scanf(" %c" ,&c);
	 printf ("you entred : %c\n", c);  
	 }
	while (c== '*');
	
return 0;
}
