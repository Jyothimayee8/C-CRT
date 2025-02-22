#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(isupper(ch))
	printf("Upper");
	else if (islower(ch))
	printf("Lower");
	else if (isdigit(ch))
	printf("Digit");
	else
	printf("spl symbol");
	return 0;
}
