//write a program to verify whether the given character os uppercase or lowercase or digit or special symbol using else-if ladder
#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if (ch >= 'a' && ch <= 'z'){ //range also used(a-z == 90 65-90 ;A-Z = 97 -122 ;0-9 = 48 -57;)
		printf("lowercase");
	}
	else if(ch >= 'A' && ch <= 'Z'){
		printf("uppercase");
	}	
	else if(ch >= '0' && ch <= '9'){
		printf("digit");
	}
	else{
		printf("spl symbol"); //default statement
	}
	return 0;
	}

