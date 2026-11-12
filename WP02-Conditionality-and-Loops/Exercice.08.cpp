#include <stdio.h>
int main () {
	char Letter;
	printf("Welcome to Lowercase to Uppercase program \n");
	do {
	printf("Enter a lowercase letter \n ");
	scanf(" %c", &Letter);
}
	while (Letter <'a' || Letter >'z');
	Letter=Letter-32;
	printf("The upercase letter is %c\n", Letter);
	return 0;
}
